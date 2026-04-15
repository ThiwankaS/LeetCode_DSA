#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

void printList(const std::string& msg, ListNode* head) {
    std::cout << msg << " : \n";

    if(!head) {
        std::cout << "List is empty!\n";
    }

    ListNode* current = head;
    int index = 1;

    while(current) {
        std::cout << "Node : " << index <<  " | value : " << current->val << "\n";
        current = current->next;
        index++;
    }
}

void clearList(ListNode* head)  {
    ListNode* current = head;

    while(current) {
        ListNode* nextNode = current->next;
        current->next = nullptr;
        delete current;
        current = nextNode;
    }
}

int main(void) {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(1);
    ListNode* three = new ListNode(0);
    ListNode* four = new ListNode(6);
    ListNode* five = new ListNode(5);
    // ListNode* six = new ListNode(1);
    // ListNode* seven = new ListNode(7);
    // ListNode* eight = new ListNode(3);
    // ListNode* nine = new ListNode(8);
    // ListNode* ten = new ListNode(4);
    // ListNode* eleven = new ListNode(100);
    
    ListNode* head = one;
    one->next = two; two->next = three; three->next = four; four->next = five;
    //five->next = six;
    //six->next = seven; seven->next = eight; eight->next = nine; nine->next = ten; ten->next = eleven;

    printList("original list", head);

    Solution s;
    ListNode* temp = s.reverseEvenLengthGroups(head);
    printList("modified list", temp);
    clearList(head);

    return (EXIT_SUCCESS);
}
