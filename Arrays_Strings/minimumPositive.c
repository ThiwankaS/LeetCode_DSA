#include <stdio.h>
#include <math.h>

int minStartValue(int *nums, int numsSize)
{
    int curr = 0, min = 0, result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        curr = curr + nums[i];
        min = fmin(min, curr);
    }
    if (min < 1)
        result = 1 - min;
    else
        result = 1;
    return (result);
}

int main(void)
{
    int nums[] = {-3, 2, -3, 4, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("Output : %d\n", minStartValue(nums, numsSize));
    return (0);
}