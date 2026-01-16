#include "Solution.hpp"

int main(void) {
    std::string str = "aaabbbcccfffxx";

    Solution s;

    if(s.areOccurrencesEqual(str))
        std::cout << str << " has equal character occurences !\n";
    else
        std::cout << str << " has different character occurences !\n";

    return (EXIT_SUCCESS);
}