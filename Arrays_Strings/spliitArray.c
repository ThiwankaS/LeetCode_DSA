#include <stdio.h>

int waysToSplitArray(int *nums, int numsSize)
{
    long int prefix[numsSize];
    long int suffix[numsSize];
    int i = 0, count = 0, j = numsSize - 1;
    prefix[i] = nums[i];
    for (i = 1; i < numsSize; i++)
    {
        prefix[i] = nums[i] + prefix[i - 1];
    }
    suffix[j] = nums[j];
    for (j = numsSize - 2; j >= 0; j--)
    {
        suffix[j] = nums[j] + suffix[j + 1];
    }
    for (int k = 0; k < numsSize - 1; k++)
    {
        if (prefix[k] >= suffix[k + 1])
            count++;
    }
    return (count);
}

int main(void)
{
    int nums[] = {0, 0};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", waysToSplitArray(nums, numsSize));
    return (0);
}