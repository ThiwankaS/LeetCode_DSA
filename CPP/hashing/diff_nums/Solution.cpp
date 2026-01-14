#include "Solution.hpp"

std::vector<int> Solution::findNumbers(std::vector<int>& nums) {
    std::vector<int> ans;
    std::unordered_set<int> history(nums.begin(), nums.end());

    for(int x : history) {
        if(!history.contains(x + 1) && !history.contains(x - 1)) {
            ans.push_back(x);
        }
    }
    
    return (ans);
}