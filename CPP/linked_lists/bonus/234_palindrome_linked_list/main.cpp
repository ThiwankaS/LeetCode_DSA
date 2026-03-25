#include "Solution.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

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
        ListNode* next = current->next;
        current->next = nullptr;
        delete current;
        current = next;
    }
}

int main (void) {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(0);
    ListNode* three = new ListNode(1);
    //ListNode* four = new ListNode(1);
    // ListNode* five = new ListNode(2);
    // ListNode* six = new ListNode(1);

    ListNode* head = one;
    one->next = two; 
    two->next = three; 
    //three->next = four; 
    // four->next = five; 
    // five->next = six;
    printList("original list : ", head);
    
    Solution s;
    ListNode* middle = s.getMiddleNode(head);
    std::cout << "middle : " << middle->val << "\n";

    if(s.isPalindrome(head)) {
        std::cout << "It is a Palindroime!\n";
    } else {
        std::cout << "Nope, not a Palindrome!\n";
    }

    clearList(head);
    return (EXIT_SUCCESS);
}
