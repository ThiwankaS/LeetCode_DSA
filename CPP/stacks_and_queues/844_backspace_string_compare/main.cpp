#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(void) {
    
    std::string s1 = "y#fo##f";
    std::string s2 = "y#f#o##f";

    Solution s;

    if(s.backspaceCompare(s1, s2)) {
        std::cout << "[" << s1 << "] and [" << s2 << "] are equal!\n";
    } else {
        std::cout << "[" << s1 << "] and [" << s2 << "] are not equal!\n";
    }

    return EXIT_SUCCESS;
}
