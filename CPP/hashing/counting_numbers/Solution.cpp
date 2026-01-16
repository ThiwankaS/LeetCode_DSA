#include "Solution.hpp"

int Solution::countElements(const std::vector<int>& arr) {
    std::set<int> frequency(arr.begin(), arr.end());
    int count = 0;
    
    for(size_t i = 0; i < arr.size(); ++i) {
        int value = arr.at(i);
        if(frequency.contains(value) && frequency.contains(value + 1)) {
            ++count;
        }
    }
    
    return (count);
}