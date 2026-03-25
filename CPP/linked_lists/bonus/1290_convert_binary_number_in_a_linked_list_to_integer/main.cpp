#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

void printList(std::string msg, ListNode* head) {
    ListNode* current = head;
    std::cout << msg << "\n";

    while(current) {
        std::cout << current->val << "\n";
        current = current->next;
    }
}

void clearList(ListNode* head) {
    ListNode* current = head;

    while(current) {
        ListNode* node = current->next;
        delete current;
        current = node;
    }
}

int main(void) {

    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(0);
    ListNode* three = new ListNode(1);

    ListNode* head = one;
    one->next = two;
    two->next = three;
    printList("original list : ", head);

    Solution s;

    int result = s.getDecimalValue(head);
    std::cout <<  "result value : " << result << "\n";

    clearList(head);
    return (EXIT_FAILURE);
}
