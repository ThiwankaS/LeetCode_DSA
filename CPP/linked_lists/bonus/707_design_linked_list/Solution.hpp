#pragma once

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node() : val(0), next(nullptr), prev(nullptr) {}
    Node(int x) : val(x), next(nullptr), prev(nullptr) {}
};

class MyLinkedList {
    public:
        int val;
        int size;
        Node* head;
        Node* tail;

        MyLinkedList() : size(0), head(nullptr), tail(nullptr) {}

        MyLinkedList(int value) {
            this->head = this->tail = new Node(value);
            size = 1;
        }

        ~MyLinkedList() {
            Node* current = this->head;

            while(current) {
                Node* nextNode = current->next;
                current->next = nullptr;
                delete current;
                current = nextNode;
            }
        }

        int get(int idex);
        void addAtHead(int value);
        void addAtTail(int value);
        void addAtIndex(int index, int value);
        void deleteAtIndex(int index);
};
