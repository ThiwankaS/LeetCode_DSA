#pragma once
#include <iostream>
#include <utility>

class LinkedList {
    private:
        int value;
        LinkedList* next;

    public:
        LinkedList();
        LinkedList(int val);

        ~LinkedList(); // destructor
        LinkedList(const LinkedList& other); // copy constructor
        LinkedList& operator=(const LinkedList& other); // copy assigment operator
        LinkedList(LinkedList&& other) noexcept; // move constructore
        LinkedList& operator=(LinkedList&& other) noexcept; // move assigment operator
        
        // function overloading
        void insert(int value);
        void insert(const LinkedList& other);
        void insert(LinkedList&& other);

        void print();

        // custome swap function
        friend void swap(LinkedList& first, LinkedList& second) noexcept {
            std::swap(first.value, second.value);
            std::swap(first.next, second.next);
        }
};
