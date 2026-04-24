#include "MyQueue.hpp"
#include <iostream>
#include <cstdlib>

int main (void) {
    MyQueue queue;
    
    std::cout << "-------------------" << __LINE__ << "\n";
    if(queue.empty()) {
        std::cout << "My queue is empty!\n";
    } else {
        std::cout << "My queue is not empty!\n";
    }
    
    std::cout << "-------------------" << __LINE__ << "\n";
    queue.push(2);
    std::cout << "peek : " << queue.peek() << "\n";

    if(queue.empty()) {
        std::cout << "My queue is empty!\n";
    } else {
        std::cout << "My queue is not empty!\n";
    }

    std::cout << "-------------------" << __LINE__ << "\n";
    queue.push(4); 
    std::cout << "peek : " << queue.peek() << "\n"; 
    std::cout << "size : " << queue.size() << "\n";

    std::cout << "-------------------" << __LINE__ << "\n";
    queue.push(6);
    std::cout << "peek : " << queue.peek() << "\n";
    std::cout << "size : " << queue.size() << "\n";

    std::cout << "-------------------" << __LINE__ << "\n";
    std::cout << "pop : " << queue.pop() << "\n";
    std::cout << "peek : " << queue.peek() << "\n";
    std::cout << "size : " << queue.size() << "\n";

    std::cout << "-------------------" << __LINE__ << "\n";
    std::cout << "pop : " << queue.pop() << "\n";
    std::cout << "peek : " << queue.peek() << "\n";
    std::cout << "size : " << queue.size() << "\n";

    return EXIT_SUCCESS;
}
