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

    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;

        middle->next = tail;
        tail = middle;
        middle = slow;
    }
 
    ListNode* revPtr = tail;
    ListNode* fwdPtr = slow;

    if(fast && fwdPtr) {
        fwdPtr = fwdPtr->next;
    }

    while(revPtr && fwdPtr) { 
        if(fwdPtr->val != revPtr->val) {
            return (false);
        }
        revPtr = revPtr->next;
        fwdPtr = fwdPtr->next;
    }

    return (true);
}
