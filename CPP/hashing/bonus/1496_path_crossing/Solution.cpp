#include "Solution.hpp"

#include <cstddef>
#include <functional>
#include <unordered_set>
#include <utility>

bool Solution::isPathCrossing(std::string& path) {
    using point = std::pair<int, int>;

    auto hash_key = [](const auto& element) {
        /**
          * Create a "hasher" object specifically for integers.     -> std::hash<int> hasher
          * Use that object to calculate the hash of element.first  -> size_t result = hasher(element.first)
          * The shortcut version : std::hash<int>{}(element.first)
        */
        size_t h1 = std::hash<int>{}(element.first);
        size_t h2 = std::hash<int>{}(element.second);
        /**
          * Hash Combiner" formula originally from the Boost C++ library
          * 0x9e3779b9 - Golden ratio
        */
        return (h1 ^ (h2 + 0x9e3779b9 + (h1 << 6) + (h1 >> 2)));
    };

    std::unordered_set<point, decltype(hash_key)> history(0, hash_key);
    
    int x = 0, y = 0;

    history.insert({x, y}); // adding intial starting point

    for(unsigned char c : path) {
        switch (c) {
            case 'N' : x++; break;
            case 'S' : x--; break;
            case 'E' : y++; break;
            case 'W' : y--; break;
        }
        auto p = std::make_pair(x, y);
        if(history.contains(p)) {
            return (true);
        }
        history.insert(p);
    }
    return (false);
}
