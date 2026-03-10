#include "Solution.hpp"

int main(void) {
    
    std::string str = "1101100111";
    Solution s;
    int lenght = s.stringLenght(str);
    std::cout << "longest string : " << lenght << "\n";
    return (EXIT_SUCCESS);
}