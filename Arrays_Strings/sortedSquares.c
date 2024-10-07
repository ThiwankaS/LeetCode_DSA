#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int i = 0;
    int j = numsSize - 1;
    int k = numsSize - 1;
    returnSize = (int *)malloc(numsSize * sizeof(int));
    while (i <= j && 0 <= k)
    {
        if ((nums[i] * nums[i]) < (nums[j] * nums[j]))
        {
            returnSize[k] = (nums[j] * nums[j]);
            j--;
            k--;
        }
        else
        {
            returnSize[k] = (nums[i] * nums[i]);
            i++;
            k--;
        }
    }
    return (returnSize);
}

int main(void)
{
    int nums[] = {-4, -1, 0, 3, 10};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int *returnSize = NULL;
    returnSize = sortedSquares(nums, numSize, returnSize);
    printf("{ ");
    for (int i = 0; i < numSize; i++)
    {
        printf(" %d,", returnSize[i]);
    }
    printf(" }\n");
    free(returnSize);
    return (0);
}