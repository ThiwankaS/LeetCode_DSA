#include "Solution.hpp"

int main(void) {
    std::string str = "leetcode";
    // std::string str = "thequickbrownfoxjumpsoverthelazydog";

    Solution s;

    if(s.checkIfPangram(str)) 
        std::cout << "string : " << str << " is a Panagram!\n";
    else
        std::cout << "string : " << str << " is not a Panagram!\n";

    return (EXIT_SUCCESS);
}