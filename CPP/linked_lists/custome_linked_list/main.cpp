#include "LinkedList.hpp"
#include <iostream>

struct LinkedListNode {
    int value;
    LinkedListNode *next;
    LinkedListNode(int val): value(val), next(nullptr) {}
};

int main(void) {
    
    // using structs
    LinkedListNode* one = new LinkedListNode(1);
    LinkedListNode* two = new LinkedListNode(2);
    LinkedListNode* three = new LinkedListNode(3);

    LinkedListNode* head = one;

    one->next = two;
    two->next = three;

    std::cout << head->value << "\n";
    std::cout << head->next->value << "\n";
    std::cout << head->next->next->value << "\n";

    delete one; delete two; delete three; 

    // using classes
    LinkedList One(1);
    LinkedList Two(2);
    LinkedList Three(3);

    LinkedList root;

    root.insert(One);
    root.print();

    Two.insert(Three);
    root.insert(Two);
    root.print();

    return (EXIT_SUCCESS);
}
