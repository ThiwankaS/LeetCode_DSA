#include <stack>
#include <iostream>
#include <cstdlib>


int main(void) {

    std::stack<int> my_stack;
   
    // first observation
    if(my_stack.empty()) {
        std::cout << "my stack is still empty \n";
    } else {
        std::cout << "my stack is not empty \n";
    }

    // second observation
    my_stack.push(1);
    if(my_stack.empty()) {
        std::cout << "my stack is still empty \n";
    } else {
        std::cout << "my stack is not empty \n";
    }

    my_stack.push(2);
    
    // third observation
    my_stack.push(3);
    std::cout << "element on the top : " << my_stack.top() << "\n";

    // fourth observation
    my_stack.push(4);
    std::cout << "element on the top : " << my_stack.top() << "\n";

    my_stack.push(5);

    // fifth observation
    std::cout << "element on the top : " << my_stack.top() << "\n";
    my_stack.push(6);

    // sixth observation
    my_stack.pop(); 
    std::cout << "element on the top : " << my_stack.top() << "\n";

    // sevent observation
    my_stack.pop(); 
    std::cout << "element on the top : " << my_stack.top() << "\n";


    return (EXIT_SUCCESS);
}
