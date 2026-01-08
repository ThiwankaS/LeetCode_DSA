#include "Solution.hpp"

template <typename T>
void printArray(std::vector<T> arr) {
    std::cout <<"{ ";
    for(auto item : arr) {
        std::cout << item << ", ";
    }
    std::cout <<" }\n";
}

int main(void) {
    std::vector<int> nums = {1, 6, 3, 2, 7, 2};
    std::vector<std::pair<int,int>> query = {{0, 3}, {2, 5}, {2, 4}}; 
    int limit = 13;
    
    Solution s;
    std::vector<std::string> result = s.queryResult(nums, query, limit);
    std::cout << "result : "; printArray(result);

    return (EXIT_SUCCESS);
}