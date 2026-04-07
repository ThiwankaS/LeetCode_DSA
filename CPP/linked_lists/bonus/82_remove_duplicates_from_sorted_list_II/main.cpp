#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

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
    std::cout << msg << " : \n";

    ListNode* current = head;
    int index = 0;

    while(current) {
        std::cout << "Node : " << index << " | val : " << current->val << "\n";
        index++;
        current = current->next;
    }
}

int main(void) {

    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(1);
    ListNode* three = new ListNode(1);
    ListNode* four = new ListNode(2);
    ListNode* five = new ListNode(3);
    //ListNode* six = new ListNode(4);
    //ListNode* seven = new ListNode(5);

    ListNode* head = one;

    one->next = two; two->next = three; three->next = four; four->next = five;
    //five->next = six; six->next = seven;

    printList(head, "original list");

    Solution s;
    ListNode* sortedList = s.deleteDuplicates(head); 
    printList(sortedList, "after removing duplicates");
    clearList(sortedList);

    return (EXIT_SUCCESS);
}
