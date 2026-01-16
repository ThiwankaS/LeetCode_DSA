#include "Solution.hpp"

int main(void) {
    std::string str = "eceba";
    int k = 2;

    Solution s;

    std::cout << "longest : " << s.findLongestSubstring(str, k) << "\n";
    return (EXIT_SUCCESS);
}