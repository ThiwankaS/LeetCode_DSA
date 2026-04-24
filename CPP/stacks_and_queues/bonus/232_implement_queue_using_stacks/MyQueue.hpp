#pragma once
#include <stack>

class MyQueue {
    private:
        std::stack<int> data;

    public:
        MyQueue() {}
        void push(int x);
        int pop();
        int peek();
        bool empty();
        int size();
};
