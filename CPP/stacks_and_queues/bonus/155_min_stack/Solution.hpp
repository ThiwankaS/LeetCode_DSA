#pragma once
#include <limits>
#include <stack>
#include <utility>

class MinStack {
    
    private:
        int min;
        std::stack<std::pair<int, int>> data;
    public:
        MinStack() : min(std::numeric_limits<int>::max()) {}
        void push(int val);
        int top();
        int pop();
        int getMin();
};
