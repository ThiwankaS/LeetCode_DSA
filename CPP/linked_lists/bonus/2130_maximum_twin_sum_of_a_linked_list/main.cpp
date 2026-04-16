#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

void printList(const std::string& msg, ListNode* head) {
    std::cout << msg << " : \n";
    
    if(!head) {
        std::cout << "List is empty!\n";
    }

    int index = 0;
    ListNode* current = head;
    
    while(current) {
        std::cout << "Node : " << index << " | value : " << current->val << "\n";
        current = current->next;
        ++index;
    }
}

void clearList(ListNode* head) {
    ListNode* current = head;

    while(current) {
        ListNode* nextNode = current->next;
        current->next = nullptr;
        delete current;
        current = nextNode;
    }
}

int main(void) {

    ListNode* one = new ListNode(5);
    ListNode* two = new ListNode(4);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(1);

    ListNode* head = one;
    one->next = two; two->next = three; three->next = four;

    printList("original list", head);

    Solution s;
    int result = s.pairSum(head);
    std::cout << "Result : " << result << "\n";
    clearList(head);

    return (EXIT_SUCCESS);
}
