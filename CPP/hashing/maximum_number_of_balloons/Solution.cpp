#include "Solution.hpp"

int Solution::maxNumberOfBalloons(std::string text) {
    std::unordered_map<unsigned char, int> frequency = {
        { 'b', 0 }, { 'a', 0 }, { 'l', 0 }, { 'o', 0 }, { 'n', 0}
    };
    
    for(const unsigned char& c : text) {
        if(frequency.contains(c)) {
            frequency[c]++;
        }
    }

    int word_count = frequency['b'];

    word_count = std::min(word_count, frequency['a']);
    word_count = std::min(word_count, frequency['n']);
    word_count = std::min(word_count, frequency['l'] / 2);
    word_count = std::min(word_count, frequency['o'] / 2);

    return (word_count);
}