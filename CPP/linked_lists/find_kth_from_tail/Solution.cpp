#include "Solution.hpp"

LinkedListNode* findNode(LinkedListNode* head, int k) {
    LinkedListNode* slow = head;
    LinkedListNode* fast = head;

    for(int i = 0; i <= k; i++) {
        if(fast == nullptr) return (nullptr);
        fast = fast->next.get();
    }

    while(fast != nullptr) {
        slow = slow->next.get();
        fast = fast->next.get();
    }
    return (slow);
}
