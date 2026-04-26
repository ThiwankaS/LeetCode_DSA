#include "Solution.hpp"
#include <deque>

int MinStack::calculate(std::stack<int> temp) {
    std::deque<int> trace;

    while(!temp.empty()) {
        while(!trace.empty() && (trace.back() > temp.top())) {
            trace.pop_back();
        }
        trace.push_back(temp.top());
        temp.pop();
    }

    return trace.front();
}

void MinStack::push(int val) {
    data.push(val);
    min = calculate(data);
}

int MinStack::pop() {
    int value = data.top();
    data.pop();
    min = calculate(data);
    return value;
}

int MinStack::top() {
    return data.top();
}

int MinStack::getMin() {
    return min;
}
