#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            if(nums[left] + nums[right] == target)
                return true;
            if(nums[left] + nums[right] < target)
                left++;
            if(nums[left] + nums[right] > target)
                right--;
        }
        return false;
    }
};

int main (void) {
    vector<int> nums = {1, 2, 3, 6, 8, 9, 14, 15};
    int target = 13;
    Solution s;
    (s.checkSum(nums, target))
        ? (cout << "nums has matching target! \n")
        : (cout << "nums dose not have matching target! \n");
    return (EXIT_SUCCESS);
}
