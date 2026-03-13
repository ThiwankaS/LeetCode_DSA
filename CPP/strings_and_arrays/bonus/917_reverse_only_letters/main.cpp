#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void){
    std::string str1 = "ab-cd";
    std::string str2 = "a-bC-dEf-ghIj";

    Solution s;
    std::cout << "original str1 : " <<str1 << "\n";
    std::cout << "result str1 : " << s.reversOnlyLetters(str1) << "\n";
    std::cout << "original str2 : " <<str2 << "\n";
    std::cout << "result str1 : " << s.reversOnlyLetters(str2) << "\n";
    return (EXIT_SUCCESS);
}
