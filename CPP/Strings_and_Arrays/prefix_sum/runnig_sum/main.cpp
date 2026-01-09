#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{ ";
    
    bool isFirst = true;
    for(auto item : container) {
        if(!isFirst) {
            std::cout <<", ";
        }
        std::cout << item;
        isFirst = false;
    }
    std::cout << " }\n";
}


int main(void) {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};

    Solution s;

    std::vector<int> result = s.runningSum(nums);
    std::cout << "result : "; printContainer(result);
     
    return (EXIT_SUCCESS);
}