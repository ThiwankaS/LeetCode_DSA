#pragma once
#include <queue>

class MyStack {
    private:
        std::queue<int> data;
    public:
        MyStack() {}
        void push(int x);
        int pop();
        int top();
        int size();
        bool empty();
};
