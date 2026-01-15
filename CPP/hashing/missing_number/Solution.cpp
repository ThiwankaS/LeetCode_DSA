#include "Solution.hpp"

int  Solution::missingNumber(const std::vector<int>& nums) {
    std::set<int> reference (nums.begin(), nums.end());
    
    int n = nums.size();

    for(int i = 0; i < n; ++i) {
        if(!reference.contains(i)) {
            return (i);
        }
    }
    return (n);
}