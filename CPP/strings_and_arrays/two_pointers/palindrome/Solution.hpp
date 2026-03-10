#include <iostream>
#include <string>

class Solution {
    public:
        explicit Solution(const std::string& str) : _str(str) {}
        bool isPalindrome();
        std::string getValue();
    private:
        std::string _str;
};