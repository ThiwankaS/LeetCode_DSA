#include "Solution.hpp"

int MyLinkedList::get(int index) {
    if(index < 0 || index >= this->size) {
        return (-1);
    }

    Node* current = this->head;
    int count = 0;

    // iterating through the list to find the corresponding node
    while(current && count <= index) {
        if(count == index) {
            return (current->val);
        }
        current = current->next;
        count++;
    }
    return (-1);
}

void MyLinkedList::addAtHead(int value) {
   Node* newNode = new Node(value);
   
   if(!head) {
       // if the list is already empty
       this->head = this->tail = newNode; 
   } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
   }
   size++;
}

void MyLinkedList::addAtTail(int value) {
    Node* newNode = new Node(value);

    if(!tail) {
        // if the list is already empty
        this->head = this->tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
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

    Node* newNode = new Node(value);
    Node* current = this->head;
    int count = 0;

    // traversing the list untill the correct index
    while(current && count < index - 1) {
        current = current->next;
        count++;
    }
    
    // creating the new node
    Node* nextNode = current->next; 
    // adding new node to the list
    newNode->next = nextNode;
    newNode->prev = current;
    current->next = newNode;
    if(nextNode) {
        nextNode->prev = newNode;
    }
    size++;
}

void MyLinkedList::deleteAtIndex(int index) {
    // boundary checking
    if(index < 0 || index >= this->size) {
        return;
    }

    // deleting the head node 
    if(index == 0) {
        Node* node = this->head;
        this->head = this->head->next;
        if(this->head) {
            this->head->prev = nullptr;
        } else {
            this->tail = nullptr;
        }
        delete node;
        size--;
        return;
    }

    // deleting the tail node
    if(index == size - 1) {
        Node* node = this->tail;
        this->tail = this->tail->prev;
        if(this->tail) {
            this->tail->next = nullptr;
        } else {
            this->head = nullptr;
        }
        delete node;
        size--;
        return ;
    }

    Node* current = this->head;
    int count = 0;
    // traversing the list up tp to the correct index
    while(current && count < index) {
        current = current->next;
        count++;
    }
    
    // isolating respectinv node and rejoing the link
    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}
