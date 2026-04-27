#include "Solution.hpp"
#include <algorithm>
#include <utility>

void MinStack::push(int val) {
    data.push(std::make_pair(val, min));
    min = std::min(min, val);
}

int MinStack::pop() {
    int value = data.top().first;
    
    if(min < data.top().second) {
        min = data.top().second;
    }

    data.pop();
    return value;
}

int MinStack::top() {
    return data.top().first;
}

int MinStack::getMin() {
    return min;
}
