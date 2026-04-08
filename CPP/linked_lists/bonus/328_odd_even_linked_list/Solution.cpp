#include "Solution.hpp"

ListNode* Solution::oddEvenList(ListNode* head) {
    ListNode* current = head;
    int index = 1;
    
    ListNode* oddList = nullptr;
    ListNode* evenList = nullptr;
    ListNode* oddHead = nullptr;
    ListNode* evenHead = nullptr;

    if(!current) {
        return (current);
    }

    oddList = current;
    current = current->next;
    oddHead = oddList;

    if(!current) {
        oddList->next = nullptr;
        return (oddList);
    }

    evenList = current;
    current = current->next;
    evenHead = evenList;
    
    while(current) {
        if(index % 2) {
            oddList->next = current;
            oddList = oddList->next;
        } else {
            evenList->next = current;
            evenList = evenList->next;
        }
        current = current->next;
        index++;
    }
    oddList->next = evenHead;
    evenList->next = nullptr;
    return (oddHead);
}
