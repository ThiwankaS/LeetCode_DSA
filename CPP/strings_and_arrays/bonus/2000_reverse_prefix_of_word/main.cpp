#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::string str = "abcdefd";
    Solution s;
    std::cout << "original : " << str << "\n";
    std::cout << "result : " << s.reversePrefix(str, 'd') << "\n";
    return (EXIT_SUCCESS);
}
