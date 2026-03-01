#include "Solution.hpp"
#include <algorithm>
#include <iostream>
#include <cstdlib>

int main(void) {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);
    ListNode* six = new ListNode(6);
    ListNode* seven = new ListNode(7);
    ListNode* eight = new ListNode(8);

    one->next = two; two->next = three; three->next = four;
    four->next = five; five->next = six; six->next = seven; seven->next = eight;

    ListNode* head = one;
    int count = 1;
    std::cout << "Original Linked List : \n";
    while(head != nullptr) {
        std::cout << count << " : " << head->val << "\n";
        count++;
        head = head->next;
    }
    std::cout << "\n\n";

    Solution s;
    head = s.swapPairs(one);
    count = 1;
    std::cout << "Linked List After swapping nodes : \n";
    while(head != nullptr) {
        std::cout << count << " : " << head->val << "\n";
        count++;
        head = head->next;
    }
    std::cout << "\n";
    return (EXIT_SUCCESS);
}
