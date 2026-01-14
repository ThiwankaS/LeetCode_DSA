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
    std::vector<int> nums = { 1, 2, 3, 5, 7, 9 , 10 , 11, 15 };

    Solution s;

    std::vector<int> result = s.findNumbers(nums);

    std::cout << "Result : "; printContainer(result);
    return (EXIT_SUCCESS);
}