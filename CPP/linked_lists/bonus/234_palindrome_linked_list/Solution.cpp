#include "Solution.hpp"
#include <iostream>

ListNode* Solution::getMiddleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return (slow);
}

bool Solution::isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* tail = nullptr;
    ListNode* middle = head;

    // traversing through the linked list 
    // slow pointer will stop at the middle of the linked list
    // creting a reversed linked list simultaniously using tail and middle pointers
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;

        middle->next = tail;
        tail = middle;
        middle = slow;
    }
 
    ListNode* revPtr = tail;
    ListNode* fwdPtr = slow;

    // if the linked list has odd no of nodes, then fast is not nullptr
    if(fast && fwdPtr) {
        fwdPtr = fwdPtr->next;
    }

    // trversing the linked list from the middle to start using revPtr 
    // traversing the linked list from middle to end using fwdPtr 
    while(revPtr && fwdPtr) { 
        // if the corresponding values of revPtr node and fwdPtr, the liked list is not a palindrome 
        if(fwdPtr->val != revPtr->val) {
            return (false);
        }
        revPtr = revPtr->next;
        fwdPtr = fwdPtr->next;
    }

    return (true);
}
