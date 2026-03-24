#include "Solution.hpp"
#include <limits>
#include <vector>
#include <unordered_map>
#include <algorithm>

/**
 * TIME COMPLEXITY ANALYSIS: Amortized O(N)
 * -------------------------------------------------------------------------
 *      Operation   |   Frequency       | Cost per Op.  |   Total Cost
 * -------------------------------------------------------------------------
 * Outer for loop   |   N times         |       O(1)    |   O(N)
 * history.contains |   N times         |       O(1)    |   O(N)
 * Inner while loop |   Total N times*  |       O(1)    |   O(N)
 * prefixSum -=     |   Total N times*  |       O(1)    |   O(N)
 * maxOut update    |   N times         |       O(1)    |   O(N)
 * -------------------------------------------------------------------------
 * Note: The inner while loop is amortized. The 'left' pointer only moves 
 * forward and never visits the same index twice over the entire execution.
 * In the worst case (all elements unique), this is O(N).
 */

int Solution::maximumUniqueSubarray(const std::vector<int>& nums) {
    int size = static_cast<int>(nums.size());
    std::unordered_map<int, int>history;

    int left = 0;
    int prefixSum = 0;
    int maxOut = std::numeric_limits<int>::min();

    for(int i = 0; i < size; i++) {
        if(history.contains(nums[i])) {
            while(left<= history[nums[i]]) {
                prefixSum -= nums[left];
                left++;
            }
            prefixSum += nums[i];;
            history[nums[i]] = i;
        } else {
            prefixSum += nums[i];
            history[nums[i]] = i;
        }
        maxOut = std::max(maxOut, prefixSum);
    }
    return (maxOut);
}
