#include <stdio.h>
#include <math.h>

int numSubarrayProductLessThanK(int *nums, int numsSize, int k)
{
    int left = 0, prod = 1, count = 0;
    for (int right = 0; right < numsSize; right++)
    {
        prod = prod * nums[right];
        while (prod >= k && left <= right)
        {
            prod = prod / nums[left];
            left++;
        }
        count = count + right - left + 1;
    }
    return (count);
}

int main(void)
{
    int nums[] = {10, 5, 2, 6};
    int k = 100;
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("No of sub-arrays : %d \n", numSubarrayProductLessThanK(nums, size, k));
    return (0);
}