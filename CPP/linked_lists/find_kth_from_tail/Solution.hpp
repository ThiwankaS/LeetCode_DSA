#pragma once
#include <memory>

struct LinkedListNode {
    int value;
    std::unique_ptr<LinkedListNode> prev;
    std::unique_ptr<LinkedListNode> next;
    LinkedListNode(int val) : value(val), prev(nullptr), next(nullptr) {}
};

LinkedListNode* findNode(LinkedListNode* head, int k);
