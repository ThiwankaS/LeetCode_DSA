#include "Solution.hpp"

int main(void) {
    std::vector<char> str = { 'h','e','l','l','o' };
    Solution s;
    s.printArray(str);
    s.reverseString(str);
    s.printArray(str);
    return (EXIT_SUCCESS);
}