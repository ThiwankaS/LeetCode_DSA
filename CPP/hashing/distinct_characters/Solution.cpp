#include "Solution.hpp"

int Solution::findLongestSubstring(const std::string& s, int k) {
    std::unordered_map<unsigned char, int> frequncy;
    int size = s.length(), left = 0, ans = 0;

    for(int right = 0; right < size; ++right) {
        unsigned char c = s[right];
        
        if(frequncy.contains(c)) {
            ++frequncy[c]; 
        } else {
            frequncy[c] = 1;
        }

        while(frequncy.size() > k) {
            unsigned char rc = s[left];
            --frequncy[rc];
            if(frequncy[rc] == 0) {
                frequncy.erase(rc);
            }
            ++left;
        }

        ans = std::max(ans, right - left + 1);
    }
    return (ans);
}