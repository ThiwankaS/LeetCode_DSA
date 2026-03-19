#include "Solution.hpp"

#include <numeric>
#include <unordered_map>
#include <vector>
#include <ranges>

int Solution::sumOfUnique(std::vector<int>& nums) {
    std::unordered_map<int, int> frequency_map = {};

    for(int value : nums){
        frequency_map[value]++;
    }
    
    auto uniques = frequency_map
        | std::views::filter([](const auto& pair){ return pair.second == 1; })
        | std::views::keys;

    int sum = std::accumulate(uniques.begin(), uniques.end(), 0);
    return (sum);
}
