#include "Solution.hpp"
#include <cstdlib>

int main(void) {
    Solution s;
    std::string path = "NNSWWEWSSESSWENNW";
    if(s.isPathCrossing(path)) {
        std::cout << "Has a crossing in the path : " << path << "\n";
    } else {
        std::cout << "Has no crossing in the path : " << path << "\n";
    }
    return (EXIT_SUCCESS);
}
