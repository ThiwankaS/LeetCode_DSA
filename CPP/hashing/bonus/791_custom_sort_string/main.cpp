#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

int main(void) {
    std::string order = "cba";
    std::string str = "abcd";
    Solution s;
    std::cout << "result : " << s.customeSortString(order, str) << "\n";
    return (EXIT_SUCCESS);
}
