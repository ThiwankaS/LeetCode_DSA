#include "Solution.hpp"

ListNode* Solution::removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* current = head;
    ListNode* previous = dummy;

    while(current) {
        if(current->val == val) {
            // store next node from the current node
            ListNode* next = current->next;

            // de-attaching current node from the linked list
            previous->next = nullptr;

            // de-attaching the current node form next node
            current->next = nullptr;
            // free up memory from the current node
            delete current;

            // set the sored next as the current node
            current = next;
            previous->next = current;
        } else {
            previous = current;
            current = current->next;
        }
    }

    head = dummy->next;
    dummy->next = nullptr;
    delete dummy;
    return (head);
}
