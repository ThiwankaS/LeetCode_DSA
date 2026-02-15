#include <stdio.h>
#include <math.h>

int findBestSubarray(int *nums, int numsSize, int k)
{
    int curr = 0, ans = 0, i = 0;
    for (i = 0; i < k; i++)
    {
        curr = curr + nums[i];
    }
    ans = curr;
    for (i = k; i < numsSize; i++)
    {
        curr = curr + nums[i] - nums[i - k];
        ans = fmax(ans, curr);
    }
    return (ans);
}

int main(void)
{
    int nums[] = {3, -1, 4, 12, -8, 5, 6};
    int k = 4;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("the sum of the subarray with the largest sum whose length is k : %d\n", findBestSubarray(nums, numsSize, k));
    return (0);
}