#include "Solution.hpp"

int Solution::minimumCardPickup(const std::vector<int>& cards) {
    std::unordered_map<int, size_t> last_seen;
    int min_distance = std::numeric_limits<int>::max();

    for(size_t i = 0; i < cards.size(); i++) {
        int card = cards[i];
        if(last_seen.contains(card)){
            int current_distance = i - last_seen[card] + 1;
            min_distance = std::min(min_distance, current_distance);
        }
        last_seen[card] = i;
    }
    return (min_distance < std::numeric_limits<int>::max() ? min_distance : -1);
}