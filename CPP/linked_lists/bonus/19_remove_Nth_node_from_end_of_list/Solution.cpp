#include "Solution.hpp"
#include <iostream>

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    // helper funtion to reverse a linked list    
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

    // reverse the original linked list
    ListNode* reversed = reverse_list(head);
    ListNode* newHead = reversed;
    ListNode* oneBefore = nullptr;
    
    // selecting the Nth node from the end
    for(int i = 1; i < n && newHead; i++) {
        oneBefore = newHead;
        newHead = newHead->next;
    }

    // removing the node
    if(newHead) {
        // storing the next node just one after the particular node
        ListNode* oneAfter = newHead->next;
        if(oneBefore) {
            // if the node need to remove is not the head of the revered list 
            // of Nth is not the last node
            oneBefore->next = oneAfter;
        } else {
            // if the node need to remove is the last node, then set the head to the next one
            reversed = oneAfter;
        }
        // relese the resource of the selected node
        delete newHead;
    }
    // returning the orginal lined list
    return (reverse_list(reversed));
}
