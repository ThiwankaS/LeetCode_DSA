#include "Solution.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
    std::string word1 = "aaaaa";
    std::string word2 = "bbbbb";

    Solution s;

    if(s.closeStrings(word1, word2)) {
        std::cout << " two strings are close !\n";
    } else {
        std::cout << " two string are not close !\n";
    }
    return (EXIT_SUCCESS);
}
