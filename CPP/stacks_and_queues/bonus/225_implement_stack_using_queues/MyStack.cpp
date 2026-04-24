#include "MyStack.hpp"
#include <queue>

void MyStack::push(int x) {
    std::queue<int> temp;
    temp.push(x);

    while(!data.empty()) {
        temp.push(data.front());
        data.pop();
    }

    data = temp;
}

int MyStack::pop() {
    int value = data.front();
    data.pop();
    return value;
}

int MyStack::size() {
    return static_cast<int>(data.size());
}

int MyStack::top() {
    return data.front();
}

bool MyStack::empty() {
    return data.empty() ? true : false;
}
