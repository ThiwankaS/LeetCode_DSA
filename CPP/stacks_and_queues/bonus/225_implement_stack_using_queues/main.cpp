#include "MyStack.hpp"
#include <iostream>
#include <cstdlib>

int main (void) {
    MyStack stack;
   
    if(stack.empty()) {
        std::cout << "My stack is still empty!\n";
    } else { 
        std::cout << "My stack is not empty!\n";
    }

    stack.push(2);
    std::cout << "top  : " << stack.top() << "\n";
   
    if(stack.empty()) {
        std::cout << "My stack is still empty!\n";
    } else { 
        std::cout << "My stack is not empty!\n";
    }

    stack.push(4);
    std::cout << "top  : " << stack.top() << "\n";

    stack.push(6);
    std::cout << "top  : " << stack.top() << "\n";

    std::cout << "size : " << stack.size() << "\n";

    std::cout << "pop  : " << stack.pop() << "\n"; 
    std::cout << "top  : " << stack.top() << "\n";
    std::cout << "size : " << stack.size() << "\n";
    return EXIT_SUCCESS;
}
