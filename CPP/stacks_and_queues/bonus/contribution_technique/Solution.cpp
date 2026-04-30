#include "Solution.hpp"
#include <vector>

long long Solution::sumOfSubbarrays(const std::vector<int>& arr) {
    printData("original data ", arr);

    int size = static_cast<int>(arr.size());
    long long sum = 0;

    for(int i = 0; i < size; ++i) {
        long long contributions = (i + 1) * (size - i);
        sum = sum + (contributions * arr[i]);
    }
    return sum;
}
