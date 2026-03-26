#include "Solution.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

void printList(std::string msg,ListNode* head) {
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
        ListNode* next = current->next;
        delete current;
        current = next;
    }
}

int main(void){
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);

    ListNode* head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    printList("original list : ", head);
    
    Solution s;

    ListNode* node = s.removeNthFromEnd(head, 2);
    printList("rversered list : ", node);

    clearList(head);
    return (EXIT_SUCCESS);
}
