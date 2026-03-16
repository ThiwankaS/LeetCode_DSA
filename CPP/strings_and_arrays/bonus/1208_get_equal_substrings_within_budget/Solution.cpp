#include "Solution.hpp"
#include <cstdlib>

int Solution::equalSubstring(std::string s, std::string t, int maxCost) {
    int lenght = s.length();

    int runningCost = 0, left = 0;
    int right = 0;

    while( right < lenght) {
        runningCost += std::abs(s[right] - t[right]); 

        if(runningCost > maxCost) {
            runningCost -= std::abs(s[left] - t[left]);
            left++;
        }
        right++;
    }
    return (right - left);
}
