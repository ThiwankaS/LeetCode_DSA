#include "Solution.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

void clearList(ListNode* head) {
    ListNode* current = head;

    while(current) {
        ListNode* next = current->next;
        current->next = nullptr;
        delete current;
        current = next;
    }
}

void printList(ListNode* head, const std::string& msg) {
    int index = 0;
    ListNode* current = head;

    std::cout << msg << " : \n";
    while(current && index < 10) {
        std::cout << "node : " << index << " | value : " << current->val << "\n";
        current = current->next;
        index++;
    }
}

int main(void) {

    ListNode* one = new ListNode(2);
    ListNode* two = new ListNode(1);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(5);
    ListNode* five = new ListNode(6);
    ListNode* six = new ListNode(4);
    ListNode* seven = new ListNode(7);

    ListNode* head = one;
    one->next = two; two->next = three; three->next = four; four->next = five;
    five->next = six; six->next = seven;

    printList(head, "original list");

    Solution s;
    ListNode* sortedList = s.oddEvenList(head);
    printList(sortedList, "\n newly sorted list");

    clearList(sortedList);
    return (EXIT_SUCCESS);
}
