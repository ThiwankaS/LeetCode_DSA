#pragma once
#include <limits>
#include <stack>

class MinStack {
    
    private:
        int min;
        std::stack<int> data;
    public:
        MinStack() : min(std::numeric_limits<int>::min()) {}
        void push(int val);
        int top();
        int pop();
        int getMin();
        int calculate(std::stack<int> temp);
};
