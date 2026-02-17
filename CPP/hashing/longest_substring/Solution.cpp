#include "Solution.hpp"
#include <algorithm>
#include <string>
#include <unordered_map>

int Solution::lengthOfLongestSubstring(const std::string& s) {
    // declaring data container to hold the key-map data
    std::unordered_map<char, int> history;
    // local varibales
    int left = 0, maxLength = 0, length = s.length();

    // iterating through the string charcter by character
    for(int right = 0; right < length; right++) {
        // chech if the character already exists in the key-map
        if(history.contains(s[right])) {
            // need to set the max value to the left index otherwise index pointer will go back nad forth
            left = std::max(left, history[s[right]] + 1);
        }
        // update the key-map with latest index values
        history[s[right]] = right;
        // calculate the maximum length base on the indexes
        maxLength = std::max(maxLength, right - left + 1);
    }
    return (maxLength);
}
