#include "Solution.hpp"
#include <unordered_map>

int Solution::numJewelsInStones(const std::string& jewels, const std::string& stones){
    // declaring a container to holds the key-value for stones 
    std::unordered_map<unsigned char, int> stoneMap;
    // bulding the key-value map for stones
    for(unsigned char c : stones) {
        stoneMap[c]++;
    }
    // iterating through the jewels and identify the no of jewels on hand
    int result = 0;
    for(unsigned char c : jewels) {
        if(stoneMap.contains(c)) {
            result += stoneMap[c];
        }
    }
    return (result);
}
