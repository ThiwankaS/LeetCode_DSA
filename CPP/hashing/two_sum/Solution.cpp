#include "Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    
    std::unordered_map<int, int> history;
    int size = nums.size();

    for(int i = 0; i < size; ++i) {
        int value = nums.at(i);
        
        if(history.contains(target - value)) {
            return { history[target - value], i};
        } else {
            history[value] = i;
        }
    }

    return {-1 , -1};
}