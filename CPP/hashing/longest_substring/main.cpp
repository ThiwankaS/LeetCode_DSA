#include "Solution.hpp"
#include <cstdlib>

int main(void) {
    Solution s;
    
    std::string s0 = "aabbcccdd"; 
    std::cout << "Result 00 : " << s.lengthOfLongestSubstring(s0)<< "\n";

    std::string s1 = " ";
    std::cout << "Result 01 : " << s.lengthOfLongestSubstring(s1)<< "\n";

    std::string s2 = "";
    std::cout << "Result 02 : " << s.lengthOfLongestSubstring(s2)<< "\n";

    std::string s3 = "au";
    std::cout << "Result 03 : " << s.lengthOfLongestSubstring(s3)<< "\n";

    std::string s4 = "abcdef";
    std::cout << "Result 04 : " << s.lengthOfLongestSubstring(s4)<< "\n"; 

    std::string s5 = "pwwkew";
    std::cout << "Result 05 : " << s.lengthOfLongestSubstring(s5)<< "\n";
     
    std::string s6 = "bbbbbb";
    std::cout << "Result 06 : " << s.lengthOfLongestSubstring(s6)<< "\n";

    std::string s7 = "abcabcbb";
    std::cout << "Result 07 : " << s.lengthOfLongestSubstring(s7)<< "\n";

    std::string s8 = "dvdf";
    std::cout << "Result 08 : " << s.lengthOfLongestSubstring(s8)<< "\n";

    std::string s9 = "abba";
    std::cout << "Result 09 : " << s.lengthOfLongestSubstring(s9)<< "\n";

    std::string s10 = "tmmzuxt";
    std::cout << "Result 10 : " << s.lengthOfLongestSubstring(s10)<< "\n";
   
    std::string s11 = "abcadefgha";
    std::cout << "Result 11 : " << s.lengthOfLongestSubstring(s11)<< "\n";

    return (EXIT_SUCCESS);
}
