#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    MinStack* minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    std::cout << "min : " << minStack->getMin() << "\n"; // return -3
    minStack->pop();
    std::cout << "top : " << minStack->top() << "\n";    // return 0
    std::cout << "min : " << minStack->getMin() << "\n"; // return -2
    delete minStack;
    return EXIT_SUCCESS;
}
