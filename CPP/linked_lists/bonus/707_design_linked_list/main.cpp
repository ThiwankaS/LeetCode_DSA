#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

void printList(MyLinkedList* obj) {
    Node* current = obj->head;
    int index = 0;

    std::cout << "Here is the list : \n";

    while(current) {
        std::cout << "index : " << index << " | value : " << current->val << "\n";
        current = current->next;
        index++;
    }
}

int main(void) {
    MyLinkedList* obj = new MyLinkedList();
    printList(obj);

    std::cout << "Adding node at the head : \n";
    obj->addAtHead(1);
    printList(obj);

    std::cout << "adding node at the tail : \n";
    obj->addAtTail(3);
    printList(obj);
 
    std::cout << "Adding node at index : \n";
    obj->addAtIndex(1, 2);
    printList(obj);

    std::cout << "Getting value at index : \n";
    std::cout << "result : " << obj->get(1) << "\n";

    std::cout << "Deleting node at index : \n";
    obj->deleteAtIndex(1);
    printList(obj);

    std::cout << "Getting value at index : \n";
    std::cout << "result : " << obj->get(1) << "\n";


    delete obj;
    return (EXIT_SUCCESS);
}
