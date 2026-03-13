#include "Solution.hpp"
#include <iterator>
#include <vector>
#include <algorithm>

int Solution::largestAltitude(std::vector<int>& gain) {
    
    if(gain.empty()) {
        return (0);
    }
    
    int size = gain.size();
    std::vector<int> prefixSum(size + 1, 0);
    auto ptrPrefix = std::next(prefixSum.begin());
    
    for(auto ptr = gain.begin(); ptr != gain.end(); ptr++) {
        *ptrPrefix = *ptr + (*std::prev(ptrPrefix));
        ++ptrPrefix;
    }

    return (*std::max_element(prefixSum.begin(), prefixSum.end()));
}

/**
  * legacy way of doing this
*/
// int Solution::largestAltitude(std::vector<int>& gain) {
//     
//     if(gain.empty()) {
//         return (0);
//     }
//     int size = gain.size();
//     int runnigTotal = 0, result = 0;
//
//     for(int i = 0; i < size; i++) {
//         runnigTotal += gain[i];
//         result = std::max(result, runnigTotal);
//     }
//     return (result);
// }
