#include "LinkedList.hpp"

LinkedList::LinkedList()
    : value(0), next(nullptr){}

LinkedList::LinkedList(int val) 
    : value(val), next(nullptr) {}

LinkedList::LinkedList(const LinkedList& other) {
    this->value = other.value; 
    // deep copying the next node liked with the other node
    this->next = other.next ? new LinkedList(*other.next) : nullptr;
}

LinkedList& LinkedList::operator=(const LinkedList& other) {
    if(this != &other) {
        LinkedList temp(other); // creating a temporary local copy for deep copying
        swap(*this, temp);
    } 
    return (*this);
}

LinkedList::LinkedList(LinkedList&& other) noexcept {
    this->value = other.value;
    this->next = other.next;

    // nullifying other node
    other.next = nullptr; // mandotory
    other.value = 0; // optional
}

LinkedList& LinkedList::operator=(LinkedList&& other) noexcept {
    if(this != &other) {
        swap(*this, other); // just swap the resources
    }
    return (*this);
}

LinkedList::~LinkedList(){
    // recursively release the memory allocated
    delete next;
}

void LinkedList::insert(int val) {
    if(next == nullptr) {
        // if the node is point ting to nullptr then create a new node
        next = new LinkedList(val);
    } else {
        // recursively adding the next node to the exsiting node
        next->insert(value);
    }
}

void LinkedList::insert(const LinkedList& other) {
    if(next == nullptr) {
        next = new LinkedList(other);
    } else {
        // recursively adding the next node to the exsiting node
        next->insert(other);
    }
}

void LinkedList::insert(LinkedList&& other) {
    if(next == nullptr) {
        next = new LinkedList(std::move(other));
    } else {
        // recursively adding the next node to the exsiting node
        next->insert(std::move(other));
    }
}

void LinkedList::print(void) {
    std::cout << value << "\n";
    if(next != nullptr) {
        next->print();
    } else {
        std::cout << "(end)" << "\n";
    }
}


