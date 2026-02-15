#include <stdio.h>
#include <stdlib.h>

int *combine(int arr1[], int arr2[], int length1, int length2)
{
    int n = length1 + length2;
    int i = 0;
    int j = 0;
    int k = 0;
    // Despite the number of distint elements are less than (length1 + length2)
    // ans array allocate memory for n elemnts
    // Need to use more adavnce data structure to mitigate this
    int *ans = (int *)calloc(n, sizeof(int));
    // Using two pointer technique iterate trough two arrays (arr1 & arr2)
    while (i < length1 && j < length2)
    {
        if (arr1[i] == arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < length1)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while (j < length2)
    {
        ans[k] = arr2[j];
        j++;
        k++;
    }
    return (ans);
}

int main(void)
{
    int arr1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 110, 120};
    int arr2[15] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 130, 140, 150, 160, 180};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int *ptr = combine(arr1, arr2, length1, length2);
    int i = 0;
    while (i < (length1 + length2))
    {
        if (i == 0)
        {
            printf("{ %d,", ptr[i]);
            i++;
        }
        else
        {
            printf("%d,", ptr[i]);
            i++;
        }
    }
    printf(" }\n");
    free(ptr);
    return (0);
}