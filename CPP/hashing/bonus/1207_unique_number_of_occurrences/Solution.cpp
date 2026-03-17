#include "Solution.hpp"

#include <unordered_map>
#include <ranges>
#include <set>

bool Solution::uniqueOccurences(std::vector<int>& arr) {
    std::unordered_map<int, int> frequncy_map = {};

    for(int value : arr) {
        frequncy_map[value]++;
    }

    auto values_set = std::views::values(frequncy_map);
    std::set<int> frequncy_set (values_set.begin(),values_set.end());
    return (frequncy_map.size() == frequncy_set.size());
}
