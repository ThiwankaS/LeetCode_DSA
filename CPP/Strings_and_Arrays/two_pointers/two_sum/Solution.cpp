#include "Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;
    std::map<int, int> history;

    size_t start    = 0;
    size_t end      = nums.size() - 1;

    while(start <= end) {
        int value = nums.at(start);
        auto it = history.find(target - value);
        if(it != history.end()) {
            result.push_back(start);
            result.push_back(it->second);
        } else {
            history.emplace(std::make_pair(value, start));
        }
        start++;
    }
    return (result);
}

void Solution::printArray(std::vector<int>& nums) {
    
    std::cout << "result : [";
    for(auto it : nums) {
        std::cout << it << ", ";
    }
    std::cout << "]\n";
}