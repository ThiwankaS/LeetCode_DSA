#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::string str1 = "bbbaaaba", str2 = "aaabbbba";
    Solution s;
    if(s.isIsomorphic(str1, str2)) {
        std::cout << "true \n";
    } else {
        std::cout << "false \n";
    }
    return (EXIT_SUCCESS);
}
