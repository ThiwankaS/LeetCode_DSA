#include "Solution.hpp"

std::vector<int> Solution::concatinateSortedArrays(
    const std::vector <int>& arr1, const std::vector <int>& arr2) {
    std::vector<int> result;
    size_t i = 0, j = 0, len1 = arr1.size(), len2 = arr2.size();

    while(i < len1 && j < len2) {
        if(arr1.at(i) < arr2.at(j)){
            result.push_back(arr1.at(i));
            result.push_back(arr2.at(j));
        } else {
            result.push_back(arr2.at(j));
            result.push_back(arr1.at(i));
        }
        ++i;
        ++j;
    }

    while(i < len1) {
        result.push_back(arr1.at(i));
        ++i;
    }

    while(j < len2) {
        result.push_back(arr2.at(j));
        ++j;
    }
    return (result);
}

void Solution::printArray(const std::vector<int>& arr) {
    std::cout << "[";
    for(auto it : arr) {
        std::cout << it << " ";
    }
    std::cout << "]\n";
}