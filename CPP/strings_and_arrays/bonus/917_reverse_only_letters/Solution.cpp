#include "Solution.hpp"
#include <cctype>
#include <utility>

std::string Solution::reversOnlyLetters(std::string s) {
   if(s.empty()) {
       return (s);
   }

   auto left = s.begin(); // iterator to the begining of the string
   auto right = std::prev(s.end()); // iterator to the end of the string

   while(left < right) {
      if(!std::isalpha(static_cast<unsigned char>(*left))) {
          ++left;
      } else if (!std::isalpha(static_cast<unsigned char>(*right))) {
          --right;
      } else {
        std::swap(*left++, *right--);
      }
   }
   return (s);
}

/**
  * below is the legacy way of doing this
*/
/**
std::string Solution::reversOnlyLetters(std::string s){
    int lenght = s.length();
    // edge case handling 
    if(lenght == 0 || lenght == 1) {
        return (s);
    }

    int left = 0, right = lenght - 1;

    while(left <= right) {
        // character pointed by left is not a alpha char move to next
        if(!std::isalpha(s[left])){
            left++;
            continue;
        }
        // character pointed by right is not a alpha char move to next 
        if(!std::isalpha(s[right])) {
            right--;
            continue;
        }
        // if both are alpha charactesr then swap
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
    return (s);
}*/
