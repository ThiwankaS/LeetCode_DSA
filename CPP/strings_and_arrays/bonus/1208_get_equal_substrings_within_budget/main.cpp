#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::string str = "abcd";
    std::string ttr = "cdef";
    int maxCost = 3;

    Solution s;
    std::cout << "result : " << s.equalSubstring(str, ttr, maxCost) << "\n";
    return (EXIT_SUCCESS);
}
