#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    
    LinkedListNode* one = new LinkedListNode(1);
    LinkedListNode* two = new LinkedListNode(2);
    LinkedListNode* three = new LinkedListNode(3);
    LinkedListNode* four = new LinkedListNode(4);
    LinkedListNode* five = new LinkedListNode(5);
    LinkedListNode* six = new LinkedListNode(6);
    LinkedListNode* seven = new LinkedListNode(7);
    LinkedListNode* eight = new LinkedListNode(8);
    LinkedListNode* nine = new LinkedListNode(9);
    LinkedListNode* ten = new LinkedListNode(10);
    LinkedListNode* eleven = new LinkedListNode(11);

    one->insert(two);
    two->insert(three);
    three->insert(four);
    four->insert(five);
    five->insert(six);
    six->insert(seven);
    seven->insert(eight);
    eight->insert(nine);
    nine->insert(ten);
    ten->insert(eleven);

    int i = 1;
    LinkedListNode* head = one;
    while(head != nullptr) {
        std::cout << i << " : " << head->value << "\n";
        head = head->next;
        ++i;
    }

    LinkedListNode* middle = getMiddleNode(one);
    std::cout << "\n\n";
    std::cout << "Value of the middle node is : " << middle->value << "\n";
    return (EXIT_SUCCESS);
}
