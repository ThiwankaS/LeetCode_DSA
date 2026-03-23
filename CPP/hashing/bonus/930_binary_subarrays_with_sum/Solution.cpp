#include "Solution.hpp"
#include <unordered_map>
#include <vector>

int Solution::numSubarraysWithSum(std::vector<int>& nums, int goal){
    int n = static_cast<int>(nums.size());
    std::vector<int> count_prefix(n + 1, 0);
    count_prefix[0] = 1;

    int running_total = 0, count_sa = 0;

    for(int element : nums) {
        running_total += element;
        int look_back = running_total - goal;

        if(look_back >= 0) {
            count_sa += count_prefix[look_back];
        }
        count_prefix[running_total]++;
    }
    return (count_sa);
}

/**
  * while below code is more mordern and idiomatic,
  * the preformance are quite low because of unorder_map
*/
// int Solution::numSubarraysWithSum(std::vector<int>& nums, int goal){
//     std::unordered_map<int, int> count_prefix = { { 0, 1 }};
//     int running_total = 0, count_sa = 0;
//
//     for(int element : nums) {
//         running_total += element;
//         int look_back = running_total - goal;
//
//         if(look_back >= 0 && count_prefix.contains(look_back)) {
//             count_sa += count_prefix[look_back];
//         }
//         count_prefix[running_total]++;
//     }
//     return (count_sa);
// }
