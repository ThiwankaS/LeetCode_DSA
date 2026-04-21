#include "Solution.hpp"
#include <vector>
#include <deque>

int Solution::longestSubarray(std::vector<int>& nums, int limit) {
    std::deque<int> increasing; // storing the minimum at front
    std::deque<int> decreasing; // storing the maximum at front
    int left = 0; 
    int answere = 0;

    for(int right = 0; right < static_cast<int>(nums.size());++right) {
        /**
          * check the corresponding value in nums with the value at the back in increasing deque
          * remove all the values from the deque which are bigger than the value and then insert
          * the value to the deque
        */
        while(!increasing.empty() && (nums[right] < increasing.back())) {
            increasing.pop_back();
        }
        
        /**
          * check the corresponding value in nums with the value at the back in decreasing deque
          * remove all the values from the deque which are smaller than the value and then insert
          * the value to the deque 
       */
        while(!decreasing.empty() && (nums[right] > decreasing.back())) {
            decreasing.pop_back();
        }

        increasing.push_back(nums[right]);
        decreasing.push_back(nums[right]);

        while(decreasing.front() - increasing.front() > limit) {
            
            if(nums[left] == decreasing.front()) {
                decreasing.pop_front();
            }
            
            if(nums[left] == increasing.front()) {
                increasing.pop_front();
            }

            ++left;
        }
        answere = std::max(answere, right - left + 1);
    }
    return answere;
}
