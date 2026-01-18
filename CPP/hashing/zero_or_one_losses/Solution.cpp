#include "Solution.hpp"

std::vector<std::vector<int>> Solution::findWinners(std::vector<std::vector<int>>& matches) {
    std::vector<std::vector<int>> result(2, std::vector<int>());
    std::unordered_map<int, int> record;

    for(const auto& match : matches) {

        int winner = match[0], losser = match[1];

        if(record.contains(losser)) {
            record[losser]++;
        } else {
            record[losser] = 1;
        }
        if(!record.contains(winner)) {
            record[winner] = 0;
        }
    }
    
    for(const auto& [key, value ] : record) {
        if(value == 0) {
            result[0].push_back(key);
        }
        
        if(value == 1) {
            result[1].push_back(key);
        }
    }

    std::sort(result[0].begin(), result[0].end());
    std::sort(result[1].begin(), result[1].end());
    return (result);
}