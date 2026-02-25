#pragma once

struct LinkedListNode {
    int value;
    LinkedListNode *prev;
    LinkedListNode *next;
    LinkedListNode(int val) : value(val), prev(nullptr), next(nullptr) {}
    
    void insert(LinkedListNode* node) {
        this->next = node;
        node->prev = this;
    }
};

bool hasCycle(LinkedListNode* head);
