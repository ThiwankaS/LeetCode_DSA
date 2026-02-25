#include "Solution.hpp"

LinkedListNode* getMiddleNode(LinkedListNode* head) {
    LinkedListNode* slow = head;
    LinkedListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return (slow);
}
