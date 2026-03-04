#include "Solution.hpp"
#include <iostream>

ListNode* Solution::reverseBetween(ListNode* head, int left, int right) {
    // safety check for edge cases
    if(head == nullptr || left == right || head->next == nullptr) {
        return (head);
    }

    // dummy node to assit with edge cases
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = head;
    ListNode* previous = dummy;

    // traversing through the list up to the previous node just before lower bound 
    for(int i = 0; i < (left - 1) && current != nullptr; i++) {
        current = current->next;
        previous = previous->next;
    }

    // tracking the poniter to the previous node just before lower bound 
    ListNode* firstHalf = current;
    // general list reversal algorithm 
    ListNode* sublistHead = nullptr;
    for(int i = 0; i < (right - left + 1) && current != nullptr; i++) {
        ListNode* nextNode = current->next;
        current->next = sublistHead;
        sublistHead = current;
        current = nextNode;
    }
    // link new head of the sublist to the tail of the first half
    previous->next = sublistHead;
    // link the last part to the tail of the sublist
    firstHalf->next = current;

    ListNode* result = dummy->next;
    delete dummy;
    return (result);
}

void printList(ListNode* start) {
    ListNode* ptr = start;
    int number = 1;
    
    if(ptr == nullptr) {
        std::cout << "Empty list {0} nodes !\n";
    }

    while(ptr != nullptr) {
        std::cout << "Node {" << number << "} : " << ptr->val << "\n";
        number++;
        ptr = ptr->next;
    }
    std::cout << "\n";
}
