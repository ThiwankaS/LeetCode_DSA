#include "Solution.hpp"

int main(void) {
    std::string s = "abc";
    std::string t = "ahbgdc";

    Solution sol;
    if(sol.isSubsequence(s, t)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    return (EXIT_SUCCESS);
}