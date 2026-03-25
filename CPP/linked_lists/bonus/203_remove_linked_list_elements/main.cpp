#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

void printList(std::string msg, ListNode* head) {
    ListNode* current = head;
    std::cout << msg << "\n";
    while(current) {
        std::cout << "value : " << current->val << "\n";
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

int main (void) {
    
    // creating nodes
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(6);
    ListNode* four = new ListNode(3);
    ListNode* five = new ListNode(4);
    ListNode* six = new ListNode(5);
    ListNode* seven = new ListNode(6);
    
    // conecting those and making the single linked ListNode
    ListNode* head = one;
    one->next = two; two->next = three; three->next = four;
    four->next = five; five->next = six; six->next = seven;
    printList("original list : ", head);

    Solution s;
    head = s.removeElements(head, 6);
    printList("after removed nodes : ", head);

    clearList(head);
    return (EXIT_SUCCESS);
}
