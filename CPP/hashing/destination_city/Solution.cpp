#include "Solution.hpp"
#include <unordered_map>

std::string Solution::destCity(const std::vector<std::vector <std::string>>& paths){
    // two containers to holds data, one for the starting city and one for destination city
    std::unordered_map<std::string, int> embark, destination;
    // iterating through paths and seperate start and end
    for(auto row : paths) {
            embark[row[0]]++;
            destination[row[1]]++;
    }
    // iterate through destinations and find the one is not exists in the starting list
    for(auto [key, value] : destination) {
        if(!embark.contains(key)) {
            return (key);
        }
    }
    // error situation, in case a circlate paths
    return ("");
}
