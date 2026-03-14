#include "Solution.hpp"
#include <limits>
#include <algorithm>

int Solution::getCommon(std::vector<int>nums1, std::vector<int>nums2)  {
    if(nums1.empty() || nums2.empty()) {
        return (-1);
    }

    auto it = std::find_if(nums1.begin(), nums1.end(), [&nums2](int x){
             return std::binary_search(nums2.begin(), nums2.end(), x);
    });

    return (it != nums1.end() ? *it : -1);
}

/**
  * legacy way of soving this problem
*/

// int Solution::getCommon(std::vector<int>nums1, std::vector<int>nums2)  {
//     if(nums1.empty() || nums2.empty()) {
//         return (-1);
//     }
//     int size1 = nums1.size(), size2 = nums2.size();
//     int index1 = 0, index2 = 0;
//     int result = std::numeric_limits<int>::max();
//
//     while(index1 < size1 && index2 < size2) {
//         
//         if(nums1[index1] == nums2[index2]) {
//             result = std::min(result, nums1[index1]);
//             index1++;
//             index2++;
//             continue;
//         }
//
//         if(nums1[index1] > nums2[index2]) {
//             index2++;
//             continue;
//         } 
//
//         if(nums1[index1] < nums2[index2]) {
//             index1++;
//             continue;
//         }
//     }
//     return (result < std::numeric_limits<int>::max() ? result : -1);
//}
