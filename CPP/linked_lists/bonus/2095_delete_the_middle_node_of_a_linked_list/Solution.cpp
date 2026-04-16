#include "Solution.hpp"

ListNode* Solution::deleteMiddle(ListNode* head) {
    
    if(!head || !head->next) {
        delete head;
        return (nullptr);
    }

    ListNode dummy(101);
    dummy.next = head;

    ListNode* fast = dummy.next;
    ListNode* slow = dummy.next;
    ListNode* prevMiddle = &dummy;

    while(fast && fast->next) {
        fast = fast->next->next;
        prevMiddle = slow;
        slow = slow->next;
    }

    prevMiddle->next = slow->next;
    slow->next = nullptr;
    delete slow;

    return (dummy.next);
}
