#include "Solution.hpp"
#include <iostream>
#include <cstdlib>

int main(void){
    std::string s1 = "ab";
    std::string s2 = "eidbaoo";

    Solution s;
    if(s.checkInclusion(s1, s2)) {
        std::cout << "s1 is include in s2!\n";
    } else {
        std::cout << "s1 is not include in s2!\n";
    }
    return (EXIT_SUCCESS);
}
