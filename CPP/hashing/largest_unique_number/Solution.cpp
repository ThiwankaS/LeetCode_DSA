#include "Solution.hpp"

int Solution::largestUniqueNumber(const std::vector<int>& nums) {
    std::map<int, int> frequency;

    for(const int& value : nums) {
        if(frequency.contains(value)) {
            frequency[value]++;
        } else {
            frequency[value] = 1;
        }
    }

    for(auto it = frequency.rbegin(); it != frequency.rend(); it++) {
        if(it->second == 1) {
            return (it->first);
        }
    }

    return (-1);
}