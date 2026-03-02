#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    ListNode* one = new ListNode(5);
    ListNode* two = new ListNode(4);
    ListNode* three = new ListNode(2);
    ListNode* four = new ListNode(1);

    one->next = two; two->next = three; three->next = four;

    ListNode* head = one;
    int count = 1;
    while(head != nullptr) {
        std::cout << count << " : " << head->val << "\n";
        count++;
        head = head->next;
    }

    Solution s;
    int result = s.pairSum(one);
    std::cout << "Result : " << result << "\n";
   ;
   
    return (EXIT_SUCCESS);
}
