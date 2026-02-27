#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(1);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(4);
    ListNode* six = new ListNode(5);
    ListNode* seven = new ListNode(5);
    ListNode* eight = new ListNode(5);
    ListNode* nine = new ListNode(6);

    one->next = two; two->next = three; three->next = four; four->next = five; five->next = six;
    six->next = seven; seven->next = eight; eight->next = nine;

    std::cout << "Original linked list : \n";
    ListNode* current = one;
    int count = 1;
    while (current != nullptr) {
        std::cout << count << " : " << current->val << "\n";
        current = current->next;
        count++;
    }

    std::cout << "\n\n After removing duplicates : \n";
    Solution s;

    ListNode* walker = s.deleteDuplicates(one); 
    count = 1;
    while (walker != nullptr) {
        std::cout << count << " : " << walker->val << "\n";
        walker = walker->next;
        count++;
    }

    return (EXIT_SUCCESS);
}
