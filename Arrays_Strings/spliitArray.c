#include <stdio.h>

int waysToSplitArray(int *nums, int numsSize)
{
    int count = 0;
    long int total = 0, curr = 0;
    for (int i = 0; i < numsSize; i++)
        total = total + nums[i];
    for (int k = 0; k < numsSize - 1; k++)
    {
        curr = curr + nums[k];
        if (curr >= (total - curr))
            count++;
    }
    return (count);
}

int main(void)
{
    int nums[] = {10, 4, -8, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", waysToSplitArray(nums, numsSize));
    return (0);
}