#include "Solution.hpp"
#include <functional>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <vector>

int Solution::identicalPairs(std::vector<int>& nums){
    int pair_count = 0;

    std::unordered_map<int, int> frequency_map = {};

    for(int element : nums) {
        frequency_map[element]++;
    }

    for(auto& [key, value] : frequency_map) {
        if(value > 1) {
            pair_count += ((value * (value - 1)) / 2);
        }
    }
    return (pair_count);
}

/**
  * while below solution is more modern and idomatic, it requires lot of memory
*/
// int Solution::identicalPairs(std::vector<int>& nums){
//     int size = static_cast<int>(nums.size());
//     int limit = size - 1;
//     int left = 0;
//     using data = std::pair<int,int>;
//
//     auto hash_key = [](const auto& p){
//         size_t h1 = std::hash<int>{}(p.first);
//         size_t h2 = std::hash<int>{}(p.second);
//         return (h1 ^ h2);
//     };
//
//     std::unordered_set<data, decltype(hash_key)> frequency_map(0, hash_key);
//
//     while(left < limit) {
//         for(int i = left + 1; i < size; i++) {
//             if(nums[left] == nums[i]) {
//                 frequency_map.insert({left, i});
//             }
//         }
//         left++;
//     }
//     return (static_cast<int>(frequency_map.size()));
// }
