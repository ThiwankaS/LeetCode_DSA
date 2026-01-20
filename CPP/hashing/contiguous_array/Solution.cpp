#include "Solution.hpp"

// { 0, 1, 1, 1, 1, 1, 0, 0, 0 }
int Solution::findMaxLength(const std::vector<int>& nums) {    
    
    int running_total = 0, length = 0, size = nums.size();

    std::unordered_map<int, int> history;
    history[0] = -1;

    for(int i = 0; i < size; ++i) {
        running_total += (nums[i] ? 1 : -1 );
        if(history.contains(running_total)) {
            length = std::max(length, i - history[running_total]);
        } else {
            history[running_total] = i;
        }
    }

    return (length);
}