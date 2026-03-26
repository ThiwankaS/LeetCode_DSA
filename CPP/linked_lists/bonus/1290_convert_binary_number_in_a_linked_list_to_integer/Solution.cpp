#include "Solution.hpp"
#include <string>

int Solution::getDecimalValue(ListNode* head) {
    int result = 0;
    std::string str = "";
    ListNode* current = head;
    
    // travresing through the linked list and building the binary string
    while(current) {
        str += static_cast<int>(current->val + '0');
        current = current->next;
    }
    // convert binary string to an integer
    result = std::stoi(str, nullptr, 2);
    return (result);
}
