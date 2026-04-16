#include "Solution.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

void printList(const std::string& msg, const ListNode* head) {
    std::cout << msg << " : \n";
    if(!head)  {
        std::cout << "List is empty!\n";
    }

    int index = 0;
    const ListNode* current = head;

    while(current) {
        std::cout << "Node : " << index << " | value : " << current->val << "\n";
        current = current->next;
        ++index;
    }
}

void listClear(ListNode* head) {
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
    //ListNode* two = new ListNode(3);
    // ListNode* three = new ListNode(4);
    // ListNode* four = new ListNode(7);
    // ListNode* five = new ListNode(1);
    // ListNode* six = new ListNode(2);
    // ListNode* seven = new ListNode(6);

    ListNode* head = one;
    //one->next = two; //two->next = three; three->next = four; four->next = five;
    //five->next = six; six->next = seven;

    printList("original list", head);

    Solution s;
    ListNode* middle = s.deleteMiddle(head);
    printList("modified list", middle);
    listClear(middle);
    return (EXIT_SUCCESS);
}
