#pragma once

struct ListNode {
    int val;
    ListNode *next;
    ListNode () : val(0), next(nullptr) {}
    ListNode (int value) : val(value), next(nullptr) {}
    ListNode (int value, ListNode *ptr) : val(value), next(ptr) {}
};

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head);
};
