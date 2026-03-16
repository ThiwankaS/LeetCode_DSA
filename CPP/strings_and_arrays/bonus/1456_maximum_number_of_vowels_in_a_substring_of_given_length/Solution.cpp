#include "Solution.hpp"
#include <string>
#include <algorithm>
#include <array>

consteval auto create_vowel_lookup() {
    std::array<bool, 256> lookup {};
    lookup['a'] = lookup['e'] = lookup['i'] = lookup['o'] = lookup['u'] = true;
    return (lookup);
}

int Solution::maxVowels(std::string& s, int k) {
    
    static constexpr auto isVowel = create_vowel_lookup();

    int lenght = s.length();
    int maxVowelsCount = 0;
    int right = 0, vowels = 0;
    
    while(right < k) {
        vowels += isVowel[static_cast<unsigned char>(s[right])];
        right++;
    }

    maxVowelsCount = vowels;

    while(right < lenght && maxVowelsCount < k) {
        vowels += isVowel[static_cast<unsigned char>(s[right])];
        vowels -= isVowel[static_cast<unsigned char>(s[right - k])];
        maxVowelsCount = std::max(maxVowelsCount, vowels);
        right++;
    }
    return (maxVowelsCount);
}
