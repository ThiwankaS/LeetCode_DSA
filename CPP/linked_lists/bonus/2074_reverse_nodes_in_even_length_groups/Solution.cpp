#include "Solution.hpp"

ListNode* Solution::reverseEvenLengthGroups(ListNode* head) {
    if(!head) {
        return (nullptr);
    }

    int group_number = 1;
    ListNode* current = head;
    ListNode* lastNode = nullptr;
    ListNode* start = head;

    /**
      * helper function to reverse a part in between two node pointing in a single linked list
    */
    auto reversing_part = [](ListNode* prevStart, const ListNode* nextEnd) {
        ListNode* previous_node_before_start = prevStart;

        ListNode* walker = prevStart->next;
        ListNode dummy(101);
        ListNode* tail = walker;

        while(walker != nextEnd) {
            ListNode* nextNode = walker->next;
            if(!dummy.next) {
                dummy.next = walker;
                walker->next = nullptr;
            } else {
                walker->next = dummy.next;
                dummy.next = walker;
            }
            walker = nextNode;
        }

        previous_node_before_start->next = dummy.next;
        tail->next = walker;
        return (tail);
    };

    while(current) {
        /**
        * iterating throught the list and if the lenght is an ODD value no reverse will
        * take place
        */
        int lenght = 0;
        while(lenght < group_number && current) {
            // update the last node at the end of the each odd group
            lastNode = current;
            current = current->next;
            ++lenght;
        }
        if( lenght % 2 == 0) {
            start = reversing_part(start, current);
        } else {
            start = lastNode;
        }
        ++group_number;
    }
    return (head);
}
