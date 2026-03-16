#include "Solution.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

int main(void) {
    std::string str = "aeiou";
    int k = 2;
    Solution s;
    std::cout << "result : " << s.maxVowels(str, k) << "\n";
    return (EXIT_SUCCESS);
}
