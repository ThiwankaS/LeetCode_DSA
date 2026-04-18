#include "Solution.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int main(void) {
    std::string str = "(({}){})";
    Solution s;

    if(s.isValid(str)) {
        std::cout << str << " is a valid string!\n";
    } else {
        std::cout << str << " is not a valid string!\n";
    }

    return (EXIT_SUCCESS);
}
