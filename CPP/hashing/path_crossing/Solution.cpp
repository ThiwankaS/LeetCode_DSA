#include "Solution.hpp"
#include <utility>

bool Solution::isPathCrossing(const std::string& path) {
    // define a cordinate
    using cordinate = std::pair<int, int>;
    // intializing a container to store all the cordinates
    std::set<cordinate> positions;
    // starting point
    int x = 0, y = 0;
    // add starting point to the positions
    positions.insert(std::make_pair(x, y));
    // iterate through the paths and determine one position at a time
    for(char c : path) {
        switch (c) {
            case 'N' : x++; break; 
            case 'S' : x--; break; 
            case 'E' : y++; break; 
            case 'W' : y--; break;
        }
        // building the corresponding pont
        cordinate p = std::make_pair(x,y);
        // check the relavant point already visited
        if(positions.contains(p)) {
            return (true);
        }
        // if not exist, then adding the corresponding point to the positions
        positions.insert(p);
    }
    return (false);
}
