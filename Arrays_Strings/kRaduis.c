#include <stdio.h>
#include <stdlib.h>

int *getAverages(int *nums, int numsSize, int k, int *returnSize)
{
    int i = 0, j = 0;
    returnSize = (int *)calloc(numsSize, sizeof(int));
    int prefix[numsSize];
    prefix[j] = nums[j];
    for (j = 1; j < numsSize; j++)
        prefix[j] = nums[j] + prefix[j - 1];
    while (i < numsSize)
    {
        if (i - k < 0)
            returnSize[i] = -1;
        else if (i + k > numsSize - 1)
            returnSize[i] = -1;
        else
        {
            if (i - k - 1 < 0)
                returnSize[i] = prefix[i + k] / (i - k + i + k + 1);
            else
                returnSize[i] = (prefix[i + k] - prefix[i - k - 1]) / ((2 * k) + 1);
        }
        i++;
    }
    return (returnSize);
}

int main(void)
{
    int nums[] = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    int k = 3; // out put { -1, -1, -1, 5, 4, 4, -1, -1, -1 }
    // int nums[] = {100000};
    // int k = 0; // out put { 100000 }
    // int nums[] = {8};
    // int k = 100000; // out put { -1 }
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int *returnSize = NULL;
    int *result = getAverages(nums, numsSize, k, returnSize);
    printf("{ ");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d, ", result[i]);
    }
    printf(" }\n");
    free(result);
    return (0);
}