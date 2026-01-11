#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{ ";
    for(auto it : container) {
        std::cout << it <<", ";
    }
    std::cout << "}\n";
}

int main(void) {
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    Solution s;

    std::vector<int> result = s.twoSum(nums, target);

    std::cout << "Result : "; printContainer(result);
    return (EXIT_SUCCESS);
}