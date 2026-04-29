#include "Solution.hpp"
#include <vector>

std::vector<int> Solution::asteroidCollision(const std::vector<int> asteroid) {
    printData(asteroid, "origianl data");
    std::vector<int> stack;
    
    for(int ast : asteroid) {
        bool destroyed = false;
        
        while(!stack.empty() && stack.back() > 0 && ast < 0) {
            // case incoming asteroid is facing each other and biger in size
            // stack asteroid get destroyed and keep the look-up
            if(std::abs(stack.back()) < std::abs(ast)) {
                stack.pop_back();
                continue;
            // case incoming asteroid is facing each other and same size
            // both stack and incoming asteroid get destroyed
            } else if( std::abs(stack.back()) == std::abs(ast)) {
                stack.pop_back();
                destroyed = true;
                break;
            // case incoming asteroid is samller
            // incoming asteroid will get destroyed
            } else {
                destroyed = true;
                break;
            }
        }

        // case asteroid servived the collision
        if(!destroyed) {
            stack.push_back(ast);
        }
    }

    return stack;
}
