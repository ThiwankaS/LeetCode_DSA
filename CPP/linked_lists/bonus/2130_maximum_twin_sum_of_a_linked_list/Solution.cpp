#include "Solution.hpp"
#include <algorithm>
#include <functional>

int Solution::pairSum(ListNode* head) {
    int sum = 0;
    ListNode* left = head;

    /**
      * std::function make below lambda funtion can refer to it self, recursion
      * sum and left will capture by refernce
    */
    std::function<void(ListNode*)> traverse = [&](ListNode* right){
        if(!right) {
            return;
        }
        
        traverse(right->next);

        if(left != nullptr) {
            sum = std::max(sum, left->val + right->val);
            left = left->next;
        }
    };
    traverse(head);
    return (sum);
}
