#include <stdio.h>
#include <math.h>

int findLength(int *nums, int size, int k)
{
    int j = 0, ans = 0, curr = 0;
    for (int i = 0; i < size; i++)
    {
        curr = curr + nums[i];
        while (curr > k)
        {
            curr = curr - nums[j];
            j++;
        }
        ans = fmax(ans, i - j + 1);
    }
    return (ans);
}

int main(void)
{
    int nums[] = {3, 1, 2, 7, 4, 2, 1, 1, 5};
    int k = 8;
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Length of the longest subarray : %d\n", findLength(nums, size, k));
    return (0);
}