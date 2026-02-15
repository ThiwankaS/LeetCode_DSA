#include <stdio.h>
#include <stdlib.h>

long int *runningSum(int *nums, int numsSize, long int *returnSize)
{
    returnSize = (long int *)calloc(numsSize, sizeof(long int));
    int i = 0;
    returnSize[i] = nums[i];
    for (i = 1; i < numsSize; i++)
        returnSize[i] = nums[i] + returnSize[i - 1];
    return (returnSize);
}

int main(void)
{
    int nums[] = {1, 1, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    long int *returnSize = runningSum(nums, numsSize, returnSize);
    printf("{ ");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%ld, ", returnSize[i]);
    }
    printf(" }\n");
    return (0);
}