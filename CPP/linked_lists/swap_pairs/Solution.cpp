#include "Solution.hpp"

ListNode* Solution::swapPairs(ListNode* head) {
    if(head == nullptr || head->next == nullptr) {
        return (head);
    }

    /*
    * Saves the new head of the list 
    * which will be the second node of the original list to return at the end
    */
    ListNode* dummy = head->next;
    ListNode* previous = nullptr; // tracking the head of the linked list

    while (head != nullptr && head->next != nullptr) {
        
        /*
        * if this is not the first iteration, then connecting the tail of last swapped pair
        * to the new head of the next pair
        */
        if(previous != nullptr) {
            previous->next = head->next;
        }
        /*
         * mark the current head which will become the tail after swapping
        */
        previous = head;
        
        /*
        * swapping of the pair of node
        */
        ListNode* nextNode = head->next->next; // mark the rest of the list from new tail
        head->next->next = head; // update the new head
        head->next = nextNode; // adding tail node of the pair

        head = nextNode; // iretating through the list 
    }
    return (dummy);
}
