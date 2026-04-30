#include "Solution.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>

int main(void) {
    std::vector<int> arr = { 3, 1, 2, 4 };
    Solution s;
    long long result = s.sumOfSubbarrays(arr);
    std::cout << "result : " << result << "\n";
    return EXIT_SUCCESS;
}
