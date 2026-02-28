#include "Solution.hpp"

ListNode* Solution::reversedList(ListNode* head) {
    ListNode* previous = nullptr;
    ListNode* curret = head;

    while(curret != nullptr) {
        ListNode* next = curret->next;
        curret->next = previous;
        previous = curret;
        curret = next;
    }

    return (previous);
}
