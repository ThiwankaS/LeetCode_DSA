#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{ ";
    for(auto it : container) {
        std::cout << it << ", ";
    }
    std::cout << " }\n";
}

int main(void) {
    std::vector<int> nums = { 7,4,3,9,1,8,5,2,6 };
    int k = 3;

    Solution s;

    std::vector<int> result = s.getAverages(nums, k);
    std::cout << "Result : "; printContainer(result);
    return(EXIT_SUCCESS);
}