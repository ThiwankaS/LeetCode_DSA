#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        vector<int> out = {-1, -1};
        vector<int>::iterator it;
        //vector<int>::reverse_iterator rit;

        while(left < right) {
            it = find(nums.begin(), nums.end(), target - nums[left]);
            if(it != nums.end()) {
                out[0] = left;
                out[1] = distance(begin(nums), it);
                return out;
            }
            // rit = find(nums.rbegin(), nums.rend(), target - nums[right]);
            // if(rit != nums.rend()) {
            //     out[0] = distance(rbegin(nums), rit);
            //     out[1] = right;
            //     return out;
            // }
            left++;
            //right--;
        }
        return out;
    }
    void print(vector<int> solution) {
        cout << "out put : [" << solution[0] << ", " << solution[1] << "]\n";
    }
};


int main (void) {

    Solution s;

    vector<int> nums1 = {2,7,11,15};
    int target1 = 9; // [0,1]
    s.print(s.twoSum(nums1, target1));

    vector<int> nums2 = {3,2,4};
    int target2 = 6; // [1,2]
    s.print(s.twoSum(nums2, target2));

    vector<int> nums3 = {3,3};
    int target3 = 6; // [0,1]
    s.print(s.twoSum(nums3, target3));
    return (EXIT_SUCCESS);
}
