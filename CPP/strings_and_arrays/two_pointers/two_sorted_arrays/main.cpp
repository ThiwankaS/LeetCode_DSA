#include "Solution.hpp"

int main (void) {
    std::vector<int> arr1 = {1,4,7,20};
    std::vector<int> arr2 = {3,5,6};

    Solution s;
    std::vector<int> result = s.concatinateSortedArrays(arr1, arr2);
    s.printArray(result);

    return (EXIT_SUCCESS);
}