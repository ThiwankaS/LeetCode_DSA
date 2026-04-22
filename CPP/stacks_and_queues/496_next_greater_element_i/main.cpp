#include "Solution.hpp"
#include <vector>
#include <cstdlib>

int main(void) {
    std::vector<int> num1 = { 4,1,2 };
    std::vector<int> num2 = { 1,3,4,2 };
    Solution s;
    std::vector<int> result = s.nextGreatElement(num1, num2);
    printArray("num1", num1);
    printArray("num2", num2);
    printArray("result", result);
    return EXIT_SUCCESS;
}
