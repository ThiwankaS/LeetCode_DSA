#include "Solution.hpp"
#include <unordered_map>

bool Solution::containsDuplicate(const std::vector<int>& num) {
    // container to store up a frequncy table
    std::unordered_map<int, int> history;
    // iterarte through the original array and building the frequecy table
    for(int value : num) {
        if(history.contains(value)){
            history[value]++;
        } else {
            history[value] = 0;
        }
    }
    // after completing the frequecy table, iterarte through the table, if any index gretaer than one it's true
    for(auto [key, value] : history) {
        if(value > 0) {
            return (true);
        }
    }
    return (false);
}
