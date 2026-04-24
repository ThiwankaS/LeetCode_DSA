#include "MyQueue.hpp"
#include <stack>

void MyQueue::push(int x) {
    std::stack<int> temp;
    
    while (!data.empty()) {
        temp.push(data.top());
        data.pop();
    }
    temp.push(x);

    while(!temp.empty()) {
        data.push(temp.top());
        temp.pop();
    }
}

int MyQueue::pop() {
    int value = data.top();
    data.pop();
    return value;
}

int MyQueue::peek() {
    return data.top();
}

bool MyQueue::empty() {
    return data.empty() ? true : false;
}

int MyQueue::size() {
    return static_cast<int>(data.size());
}
