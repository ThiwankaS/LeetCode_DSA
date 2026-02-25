#include "Solution.hpp"

bool hasCycle(LinkedListNode* head) {
    LinkedListNode* slow = head;
    LinkedListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return (true);
        }
    }
    return (false);
}
