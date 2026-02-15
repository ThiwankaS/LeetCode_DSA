#include "Solution.hpp"

int Solution::maximumSum(std::vector<int>& nums) {
    
    auto digitSum = [](int number) {
        int sum = 0;
        std::string numberStr = std::to_string(number);
        for(char c : numberStr) {
            sum += c - 48;
        }
        return (sum);
    };

    std::unordered_map<int, std::vector<int>>history;
    /*
     * re-arranging data in a key value pair, where key is the sum of the digits 
     * later can query data by digitSum
    */
    for(int i : nums) {
        int sum = digitSum(i);
        history[sum].push_back(i);
    }

    int ans = -1;
    /*
     * iterate through the key-map, if any key has values more then one then first sort
     * then get the sum of the largest two values
    */
    for(auto [key, values] : history) {
        if(values.size() > 1) {
            std::sort(values.begin(), values.end(), std::greater<int>());
            ans = std::max(ans, values[0] + values[1]);
        }
    }
    
    return (ans);
}
