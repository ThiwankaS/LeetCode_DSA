#include "Solution.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main(void) {

    std::string str = "abBAcC";
    Solution s;
    std::cout << "original string : " << str << "\n";
    std::cout << "great string : " << s.makeGood(str) << "\n";
    return EXIT_SUCCESS;
}
