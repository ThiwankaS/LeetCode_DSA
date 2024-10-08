#include <stdio.h>
#include <math.h>

double findMaxAverage(int *nums, int numsSize, int k)
{
    double average = 0.0, sum = 0.0;
    int right = 0;
    for (right = 0; right < k; right++)
    {
        sum = sum + nums[right];
    }
    average = (double)sum / k;
    for (right = k; right < numsSize; right++)
    {
        sum = sum + nums[right] - nums[right - k];
        average = fmax(average, (double)(sum / k));
    }
    return (average);
}

int main(void)
{
    int nums[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("Maximum average is : %.5lf \n", findMaxAverage(nums, numsSize, k));
    return (0);
}