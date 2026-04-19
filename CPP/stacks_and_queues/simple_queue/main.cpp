#include <cstdlib>
#include <iostream>
#include <queue>


int main(void) {
    std::queue<int> my_queue;

    if(my_queue.empty()) {
        std::cout << "My queue is empty!\n";
    } else {
        std::cout << "My queue has " << my_queue.size() << " elements\n";
    }

    my_queue.push(1);
    my_queue.push(2);
    my_queue.push(3);

    if(my_queue.empty()) {
        std::cout << "My queue is empty!\n";
    } else {
        std::cout << "My queue has " << my_queue.size() << " elements\n";
    }

    std::cout << "Front element is : " << my_queue.front() << "\n";
    std::cout << "Back element is  : " << my_queue.back() << "\n";

    my_queue.pop();

    if(my_queue.empty()) {
        std::cout << "My queue is empty!\n";
    } else {
        std::cout << "My queue has " << my_queue.size() << " elements\n";
    }

    std::cout << "Front element is : " << my_queue.front() << "\n";
    std::cout << "Back element is  : " << my_queue.back() << "\n";

    return EXIT_SUCCESS;
}
