#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *build_prefixsum(int *nums, int *prefix, int numsSize)
{
    int i = 0;
    prefix[i] = nums[i];
    for (i = 1; i < numsSize; i++)
    {
        prefix[i] = nums[i] + prefix[i - 1];
    }
    return (prefix);
}

bool *answerQueries(int *nums, int numsSize, int queries[3][2], int limit)
{
    int prefix[numsSize];
    int *result = build_prefixsum(nums, prefix, numsSize);
    bool *answers = calloc(3, sizeof(bool));
    for (int i = 0; i < 3; i++)
    {
        if (result[queries[i][1]] - result[queries[i][0]] + nums[queries[i][0]] < limit)
        {
            answers[i] = true;
        }
        else
        {
            answers[i] = false;
        }
    }
    return (answers);
}

int main(void)
{
    int nums[] = {1, 6, 3, 2, 7, 2};
    int queries[3][2] = {{0, 3}, {2, 5}, {2, 4}};
    int limit = 13;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    bool *result = answerQueries(nums, numsSize, queries, limit);
    for (int j = 0; j < 3; j++)
        printf("%d\n", result[j]);
    free(result);
    return (0);
}