#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main (void) {
    Solution s;
    std::vector<int> arr = { 3,1,2,4 };
    long long result = s.sumSubarraysMins(arr);
    std::cout << "result : " << result << "\n";
    return EXIT_SUCCESS;
}
