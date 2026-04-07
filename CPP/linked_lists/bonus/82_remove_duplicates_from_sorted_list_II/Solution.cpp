#include "Solution.hpp"
#include <limits>

ListNode* Solution::deleteDuplicates(ListNode* head) {
    
    int dummyValue = std::numeric_limits<int>::min();
    ListNode* dummy = new ListNode(dummyValue);
    dummy->next = head;
    
    ListNode* current = dummy;
    ListNode* nextNode = nullptr;
    int previousValue = dummyValue;

    while(current) {
        
        nextNode = current->next;
        
        if(nextNode) {
            previousValue = nextNode->val;
            ListNode* followingNode = nextNode->next;
                
            if(followingNode && followingNode->val == previousValue) {
                // delete all the nodes with equal values
                while(followingNode && followingNode->val == previousValue) {
                    ListNode* subsequentNode = followingNode->next;
                    followingNode->next = nullptr;
                    delete followingNode;
                    followingNode = subsequentNode;
                }
                current->next = followingNode;
                nextNode->next = nullptr;
                delete nextNode;
            } else {
                current = nextNode;
            }
        } else {
            current = nextNode;
        }
    }
    head = dummy->next;
    dummy->next = nullptr;
    delete dummy;
    return (head);
}
