#include "Solution.hpp"
#include <iostream>
#include <limits>

ListNode* getMiddleNode(ListNode* head) {

    // empty linked list and list with one node
    if(head == nullptr || head->next == nullptr) {
        return (head);
    }
    // list withg only two nodes, then the second will be the middle
    if(head->next->next == nullptr) {
        return (head->next);
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return (slow);
}

ListNode* reversedList(ListNode* head) {
    ListNode* current = head;
    ListNode* previous = nullptr;

    while(current != nullptr) {
        ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return (previous);
}

void printList(ListNode* head)  {
    ListNode* current = head;
    int count = 1;
    while(current != nullptr) {
        std::cout << count << " : " << current->val << ", ";
        current = current->next;
        count++;
    }
    std::cout << "\n";
}

int Solution::pairSum(ListNode* head) {

    // empty list
    if(head == nullptr) {
        return (0);
    }

    // list with only one node
    if(head->next == nullptr) {
        return (head->val);
    }

    // list with two nodes
    if(head->next->next == nullptr) {
        return (head->val + head->next->val);
    }

    ListNode* middle = getMiddleNode(head);
    ListNode* reversed = reversedList(middle);

    int sum = std::numeric_limits<int>::min();
    
    ListNode* first = head;
    ListNode* second = reversed;

    while(second != nullptr) {
        sum = std::max(sum, (first->val + second->val));
        first = first->next;
        second = second->next;
    }
    return (sum);
}
