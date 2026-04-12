#include "Solution2.hpp"
#include <memory>
#include <utility>

int MyLinkedList::get(int index) {
    if(index < 0 || index >= this->size) {
        return (-1);
    }

    Node* current = this->head.get();
    int count = 0;

    // iterating through the list to find the corresponding node
    while(current && count <= index) {
        if(count == index) {
            return (current->val);
        }
        current = current->next.get();
        count++;
    }
    return (-1);
}

void MyLinkedList::addAtHead(int value) {
   auto newNode = std::make_unique<Node>(value);
   
   if(!head) {
        // if the list is already empty
        this->head = std::move(newNode);
        this->tail = head.get();
   } else {
        head->prev = newNode.get();
        newNode->next = std::move(head);
        head = std::move(newNode);
   }
   size++;
}

void MyLinkedList::addAtTail(int value) {
    auto newNode = std::make_unique<Node>(value);
    Node* rawNewNode = newNode.get();

    if(!tail) {
        // if the list is already empty
        this->head = std::move(newNode); 
        this->tail = head.get();
    } else {
        rawNewNode->prev = tail;
        tail->next = std::move(newNode);
        tail = rawNewNode;
    }
    size++;
}

void MyLinkedList::addAtIndex(int index, int value) {
    // boundry checking
    if(index < 0 || index > this->size) {
        return;
    }
    
    // adding node at the head
    if(index == 0) {
        this->addAtHead(value);
        return;
    }

    // adding node at the tail
    if(index == size) {
        this->addAtTail(value);
        return;
    }

    // creating the new node
    auto newNode = std::make_unique<Node>(value);
    Node* rawNewNode = newNode.get();
    Node* current = this->head.get();
    int count = 0;

    // traversing the list untill the correct index
    while(current && count < index - 1) {
        current = current->next.get();
        count++;
    }
    
    // adding new node to the list
    newNode->next = std::move(current->next);
    newNode->prev = current;
    if(newNode->next) {
        newNode->next->prev = rawNewNode;
    }
    current->next = std::move(newNode);
    size++;
}

void MyLinkedList::deleteAtIndex(int index) {
    // boundary checking
    if(index < 0 || index >= this->size) {
        return;
    }

    // deleting the head node 
    if(index == 0) {
        this->head = std::move(this->head->next);
        if(this->head) {
            this->head->prev = nullptr;
        } else {
            this->tail = nullptr; // list is empty now
        }
        size--;
        return;
    }

    // deleting the tail node
    if(index == size - 1) {
        Node* newTail = this->tail->prev;
        newTail->next = nullptr;
        this->tail = newTail;
        size--;
        return ;
    }

    Node* current = this->head.get();
    int count = 0;
    // traversing the list up tp to the correct index
    while(current && count < index) {
        current = current->next.get();
        count++;
    }
   
    // isolating respective node and rejoing the link
    Node* nextNode = current->next.get();
    Node* prevNode = current->prev;
    
    if(nextNode) {
        nextNode->prev = prevNode;
    }
    current->prev->next = std::move(current->next);
    size--;
}
