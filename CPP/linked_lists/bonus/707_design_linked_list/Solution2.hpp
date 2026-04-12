#pragma once
#include <memory>

struct Node {
    int val;
    std::unique_ptr<Node> next;
    Node* prev;
    Node() : val(0), next(nullptr), prev(nullptr) {}
    Node(int x) : val(x), next(nullptr), prev(nullptr) {}
};

class MyLinkedList {
    public:
        int size;
        std::unique_ptr<Node> head;
        Node* tail;

        MyLinkedList() : size(0), head(nullptr), tail(nullptr) {}

        MyLinkedList(int value) {
            this->head = std::make_unique<Node>(value);
            this->tail = head.get();
            this->size = 1;
        }

        int get(int idex);
        void addAtHead(int value);
        void addAtTail(int value);
        void addAtIndex(int index, int value);
       void deleteAtIndex(int index);
};
