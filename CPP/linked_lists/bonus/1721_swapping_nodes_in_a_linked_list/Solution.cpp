#include "Solution.hpp"

ListNode* Solution::swappedNode(ListNode* head, int k) {

    if(!head) {
        return (nullptr);
    }

    ListNode dummy(199);
    dummy.next = head;

    ListNode* prevFromStart = &dummy;
    ListNode* prevFromEnd = &dummy;
    ListNode* current = head;

    // finding the previous node of kth node from the start
    for(int i = 1; i < k; ++i) {
        if(!current) {
            return (nullptr);
        }
        prevFromStart = current;
        current = current->next;
    }

    // this is behave similar to a sliding window
    // finding the previous node of the kth node from the end
    while(current->next) {
        current = current->next;
        prevFromEnd = prevFromEnd->next;
    }

    if(prevFromStart != prevFromEnd) {
        ListNode* fromStart = prevFromStart->next;
        ListNode* fromEnd = prevFromEnd->next;
        
        // fromStart and fromEnd next to each other follwing the sequence fromStart, fromEnd
        if(fromStart->next == fromEnd) {
            fromStart->next = fromEnd->next;
            fromEnd->next = fromStart;
            prevFromStart->next = fromEnd;
        // fromStart and fromEnd next to each other follwing the sequence fromEnd, fromStart
        } else if(fromEnd->next == fromStart) {
            fromEnd->next = fromStart->next;
            fromStart->next = fromEnd;
            prevFromEnd->next = fromStart;
        // nodes are exists in the list normally
        } else {
            ListNode* tail = fromStart->next;
            fromStart->next = fromEnd->next;
            prevFromEnd->next = fromStart;
            fromEnd->next = tail;
            prevFromStart->next = fromEnd;
        }
    }
    return (dummy.next);
}
