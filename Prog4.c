//Find the largest value in a particuler array

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// This function will return the largest value of any array

int maxarr(int arr[], int n)
{
    int max = arr[0]; // Initialized max as the 1st element of the array

    for (int i = 1; i < n; i++)
    {
        // if max value is small than the array's value then the max has been initialized as the array's vaule

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

// This function will return the smallest value of any array

int minarr(int arr[], int n)
{
    int min = arr[0]; // Initialized min as the 1st element of the array

    for (int i = 1; i < n; i++)
    {
        // if max value is big than the array's value then the max has been initialized as the array's vaule

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

void main() // This is the main function
{
    int arr[] = {12, 42, 4, 32, 22, 4, 27, 5, 96, 88, 76, 9};

    int maximum = maxarr(arr, 12);
    int minimum = minarr(arr, 12);

    printf("The max value is = %d\n", maximum);
    printf("The min value is = %d\n", minimum);
}