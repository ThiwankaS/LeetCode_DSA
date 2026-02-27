#include "Solution.hpp"

ListNode* Solution::deleteDuplicates(ListNode* head) {
    
    if(!head || !head->next) {
        return (head);
    }

    ListNode *slow = head;
    ListNode *fast = head->next;
    
    while (fast != nullptr) {
        // check if the valuse are same, meaning duplicate
        if(slow->val == fast->val) {
            // removing the node
            slow->next = fast->next;
            fast = fast->next;
            continue;
        } else {
        // iterating through the linked list
        slow = slow->next;
        fast = fast->next;
        }
    }
    return (head);
}
