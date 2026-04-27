#include "Solution.hpp"
#include <cstddef>
#include <queue>

std::string Solution::predictPartyVictory(std::string& senate) {
    size_t n = senate.size();
    std::queue<size_t> qD, qR;

    for(size_t i = 0; i < n; ++i) {
        // if the senate is "Dire" add the index to the dire voting queue        
        if(senate[i] == 'D') {
            qD.push(i);
        }

        // if the senate is "Radianr" add the index to the radiant voting queue        
        if(senate[i] == 'R') {
            qR.push(i);
        }
    }

    while (!qD.empty() && !qR.empty()) {
        size_t index_d = qD.front();
        qD.pop();

        size_t index_r = qR.front();
        qR.pop();

        // Dire senate has execuate his rights and Radiant got banned
        if(index_d < index_r) {
            // Dire going to the next round
            qD.push(index_d + n);
        }
        
        // Radiant senate had execuate his rights and Dire got banned
        if(index_r < index_d) {
            // Radiant going to the next round
            qR.push(index_r + n);
        }
    }

    // whoever still has one senate with voting rights will win
    return qR.empty() ? "Dire" : "Radiant"; 
}
