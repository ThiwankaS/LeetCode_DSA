#include "Solution.hpp"
#include <unordered_map>

bool Solution::canConstruct(const std::string& ransomeNote, const std::string& magazine) {
    // decalring containers to holds the data
    std::unordered_map<unsigned char, int> noteMap, magazineMap;
    // buiding the note key-map
    for(unsigned char c : ransomeNote) {
        noteMap[c]++;
    }
    // building the magazine key-map
    for(unsigned char c : magazine) {
        magazineMap[c]++;
    }
    // check each elements in the note key-map against the magazine key-map
    // if all the characters and frequncies are matching then condition is true, else false
    for(auto [key, value] : noteMap) {
        if(magazineMap.contains(key)) {
            if(value <= magazineMap[key])
                continue;
        }
        return (false);
    }
    return(true);
}
