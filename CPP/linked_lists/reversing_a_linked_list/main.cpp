#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);
    ListNode* six = new ListNode(6);
    ListNode* seven = new ListNode(7);
    ListNode* eight = new ListNode(8);
    ListNode* nine = new ListNode(9);
    ListNode* ten = new ListNode(10);

    one->next = two; two->next = three; three->next = four; four->next = five;
    five->next = six; six->next = seven; seven->next = eight; eight->next = nine; nine->next = ten;

    ListNode* head = one;
    std::cout << "Original Linked list : \n";
    int count = 1;
    while(head != nullptr){
        std::cout << count << " : " << head->value << "\n";
        head = head->next;
        count++;
    }

    std::cout << "\n\n";
    Solution s;
    ListNode* reversed = s.reversedList(one);
    std::cout << "Rversed Linked list : \n";
    count = 1;
    while(reversed != nullptr){
        std::cout << count << " : " << reversed->value << "\n";
        reversed = reversed->next;
        count++;
    }

    return (EXIT_SUCCESS);
}
