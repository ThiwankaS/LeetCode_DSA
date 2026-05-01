#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>

int main(void) {

    Solution s;
    std::vector<int> pushed = { 1,2,3,4,5 };
    std::vector<int> popped = { 4,3,5,1,2 };

    if(s.validateStackSequences(pushed, popped)) {
        std::cout << "pushed and popped are valid stack sequence!\n";
    } else {
        std::cout << "pushed and popped are  not valid stack sequence!\n";
    }

    return EXIT_SUCCESS;
}
