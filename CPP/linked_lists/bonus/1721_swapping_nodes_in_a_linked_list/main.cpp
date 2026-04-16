#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

void clearList(ListNode* head) {
    ListNode* current = head;

    while (current) {
        ListNode* nextNode = current->next;
        current->next = nullptr;
        delete current;
        current = nextNode;
    }
}

void printList(const std::string& msg, ListNode* head) {
    std::cout << msg << "\n";

    ListNode* current = head;
    int index = 1;

    while (current) {
        std::cout << "Node : " << index << " | Value : " << current->val << "\n";
        current = current->next;
        index++;
    }
}

int main(void) {

    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);

    ListNode* head = one;
    one->next = two; two->next = three; three->next = four; four->next = five;

    Solution s;
    printList("original list ", head);

    ListNode* updated = s.swappedNode(head, 2);
    printList("Updated list ", updated);
    clearList(updated);

    return (EXIT_SUCCESS);
}
