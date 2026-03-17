#include "Solution.hpp"

#include <unordered_map>

bool Solution::containsDuplicate(std::vector<int>& nums) {
    std::unordered_map<int, int> history = { };
    
    for(int value : nums) {
        if(history.contains(value)) {
            return (true);
        }
        history[value] = 1;
    }
    return (false);
}
