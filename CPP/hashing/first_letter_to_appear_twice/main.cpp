#include "Solution.hpp"


int main(void) {
    std::string str = "abccbaacz";
    
    Solution s;

    std::cout << "repetaed first letter : " << s.repeatedCharacter(str) << " \n"; 
    return (EXIT_SUCCESS);
}