#include <string.h>
#include <stdio.h>
#include <math.h>

int longestOnes(int *nums, int numsSize, int k)
{
    int left = 0, right = 0, countZeros = 0, countOnes = 0, ans = 0;
    while (right < numsSize)
    {
        if (nums[right] == 1)
            countOnes++;
        if (nums[right] == 0)
            countZeros++;
        while (countZeros > k)
        {
            if (nums[left] == 0)
                countZeros--;
            if (nums[left] == 1)
                countOnes--;
            left++;
        }
        ans = fmax(ans, (countOnes + countZeros));
        right++;
    }
    return (ans);
}

int main(void)
{
    int nums[] = {0, 0, 0, 0};
    int k = 0;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf(" Max numbers of consecutive ones : %d\n", longestOnes(nums, numsSize, k));
    return (0);
}