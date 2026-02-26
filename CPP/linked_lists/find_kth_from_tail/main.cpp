#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <memory>

int main(void) {
    
    auto one = std::make_unique<LinkedListNode>(1);

    LinkedListNode* current = one.get();
    
    for(int i = 1; i < 25; i++) {
        current->next = std::make_unique<LinkedListNode>(i + 1);
        current = current->next.get();
    }

    int count = 1;
    LinkedListNode* head = one.get();
    while(head != nullptr) {
        std::cout << count << " : " << head->value << "\n";
        head = head->next.get();;
        count++;
    }

    std::cout << "\n\n";
    LinkedListNode* node = findNode(one.get(), 2);
    std::cout << "Value of the k'th node is : " << node->value << "\n";

    return (EXIT_SUCCESS);
}
