#include "Solution.hpp"
#include <iostream>

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    
    auto reverse_list = [&](ListNode* node) {
        ListNode* ptr = node;
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        while(ptr) {
            next = ptr->next;
            ptr->next = previous;
            previous = ptr;
            ptr = next;
        }
        return (previous);
    }; 

    ListNode* reversed = reverse_list(head);
    ListNode* newHead = reversed;
    ListNode* oneBefore = nullptr;

    for(int i = 1; i < n && newHead; i++) {
        oneBefore = newHead;
        newHead = newHead->next;
    }

    if(newHead) {
        ListNode* oneAfter = newHead->next;
        if(oneBefore) {
            oneBefore->next = oneAfter;
        } else {
            reversed = oneAfter;
        }
        delete newHead;
    }

    return (reverse_list(reversed));
}
