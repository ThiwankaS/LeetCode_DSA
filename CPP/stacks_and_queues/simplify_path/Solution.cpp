#include "Solution.hpp"
#include <string>
#include <vector>
#include <sstream>

std::string Solution::simplifyPath(std::string path) {
    std::vector<std::string> segments;
    std::stringstream ss(path);
    std::string segment;

    while(std::getline(ss, segment, '/')) {
        // if the segment is "//" or "." skiiping those segments
        if(segment == "" || segment == ".") {
            continue;
        // if the segment is ".." then path should go back to the previous directory
        } else if (segment == "..") {
            if(!segments.empty()) {
                segments.pop_back();
            }
        } else {
            segments.push_back(segment);
        }
    }

    if(segments.empty()) {
        return "/";
    }

    std::string result = "";

    for(std::string dir : segments) {
        result += "/" + dir;
    }

    return result;
}
