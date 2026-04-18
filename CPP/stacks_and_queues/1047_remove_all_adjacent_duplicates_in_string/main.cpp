#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(void) {
    std::string str = "abccbaca";
    Solution s;

    std::cout << "original string : [" << str << "]\n";
    std::cout << "modified string : [" << s.removeDuplicates(str) << "]\n";
    return (EXIT_SUCCESS);
}
