#include "Solution.hpp"
#include <sstream>

std::string Solution::reverseWords(std::string& s) {
    std::istringstream iss (s);
    std::ostringstream oss;
    std::string word;
    bool isFirst = true;

    while(iss >> word) {
        // this will skip for the first word, else will add " " + word to the oss
        if(!isFirst) {
            oss << " ";
        }
        oss << std::string(word.rbegin(), word.rend());
        isFirst = false;
    }
    return (oss.str());
}

/**
  * Below is the legacy way of doing the same using two pointer method
  * This solution is more memory efficient and fast
*/

/*
std::string Solution::reverseWords(std::string& s) {
    int left = 0, right = 0;
    int size = s.length();

    for(int i = 0; i < size; i++) {
        if(s[i] == ' ') {
            right = i - 1;
            while(left <= right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
            left = i + 1;
        }
    }

    right = size - 1;
    while(left <= right) {
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
    return (s);
}
*/
