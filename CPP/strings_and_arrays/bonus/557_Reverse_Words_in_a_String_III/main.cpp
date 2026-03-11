#include "Solution.hpp"
#include <cstdlib>
#include <iostream>


int main(void) {
    Solution s;
    //std::string str = "Let's take LeetCode contest"; 
    std::string str = "Hello World!";
    std::cout << "Original string : " << str << "\n";
    std::cout << "Reversed string : " << s.reverseWords(str) << "\n";
    return (EXIT_SUCCESS);
}
