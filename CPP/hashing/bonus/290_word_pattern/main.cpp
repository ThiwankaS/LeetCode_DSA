#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::string str = "dog cat cat dog";
    std::string pattern = "aaaa";
    Solution s;

    if(s.wordPattern(pattern, str)) {
        std::cout << "full match found!\n";
    } else {
        std::cout << "no match found!\n";
    }
    return (EXIT_SUCCESS);
}
