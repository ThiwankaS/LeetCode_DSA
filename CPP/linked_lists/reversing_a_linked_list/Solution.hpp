#pragma once

struct ListNode {
    int value;
    ListNode* next;
    ListNode() : value(0), next(nullptr) {}
    ListNode(int val) : value(val), next(nullptr){}
    ListNode(int val, ListNode* ptr) : value(val), next(ptr) {}
};

class Solution {
    public:
        ListNode* reversedList(ListNode* head);
};
