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
    ListNode* eleven = new ListNode(11);

    one->next = two; two->next = three; // normal part
    three->next = nine; nine->next = eight; eight->next = seven; seven->next = six; six->next = five; five->next = four; // backword part
    four->next = ten; ten->next = eleven; // rest of the list

    std::cout << "original list test 01: \n";
    printList(one);

    Solution s;
    ListNode* node = s.reverseBetween(one, 4, 9); 
    std::cout << "after corrected test 01: \n";
    printList(node);

    one->next = two; two->next = three; three->next = four; four->next = five; five->next = nullptr;
    std::cout << "original list test 02: \n";
    printList(one);
    node = s.reverseBetween(one, 2, 4); 
    std::cout << "after corrected test 02: \n";
    printList(node);
    
    four->next = nullptr;
    five->next = nullptr;
    std::cout << "original list test 03: \n";
    printList(five);

    node = s.reverseBetween(five, 1, 1); 
    std::cout << "after corrected test 03: \n";
    printList(node);

    two->next = nullptr;
    three->next = five; five->next = nullptr;
    std::cout << "original list test 04: \n";
    printList(three);

    node = s.reverseBetween(three, 1, 2); 
    std::cout << "after corrected test 04: \n";
    printList(node);

    return (EXIT_SUCCESS);
}
