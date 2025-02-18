/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Find minimum amd maximum value in given array.
*/

#include<stdio.h>
#include<limits.h>

// For deciding the datatype
#define DATA_TYPE int         // In this case, the int datatype.
#define MAX_VALUE INT_MAX     // Setting the maximum value.
#define MIN_VALUE INT_MIN     // Setting the minimum value.

// Function to find the maximum value in the array.
DATA_TYPE findMaxValue(const DATA_TYPE*, int);

// Function to find the minimum value in the array.
DATA_TYPE findMinValue(const DATA_TYPE*, int);

int main(void)
{
    DATA_TYPE array[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);

    DATA_TYPE maxValue = findMaxValue(array, length);
    DATA_TYPE minValue = findMinValue(array, length);

    if (maxValue != INT_MIN && minValue != INT_MAX)
    {
        fprintf(stdout, "Maximum Value: %d\n", maxValue);
        fprintf(stdout, "Minimum Value: %d\n", minValue);
    }
    else
    {
        fprintf(stderr, "Invalid array or empty array.\n");
    }

    return 0;
}

DATA_TYPE findMaxValue(const DATA_TYPE* array, int length)
{
    // Check if the array is valid
    if (!array || length <= 0)
    {
        return INT_MIN; // Return minimum possible value to indicate error
    }

    DATA_TYPE maxValue = MIN_VALUE;

    for (int index = 0; index < length; ++index)
    {
        if (array[index] > maxValue)
        {
            maxValue = array[index];
        }
    }

    return maxValue;
}

DATA_TYPE findMinValue(const DATA_TYPE* array, int length)
{
    // Check if the array is valid
    if (!array || length <= 0)
    {
        return INT_MAX; // Return maximum possible value to indicate error
    }

    DATA_TYPE minValue = MAX_VALUE;

    for (int index = 0; index < length; ++index)
    {
        if (array[index] < minValue)
        {
            minValue = array[index];
        }
    }

    return minValue;
}