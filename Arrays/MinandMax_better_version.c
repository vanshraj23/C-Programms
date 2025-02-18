/*
    Author : Vansh Raj Bir. 
    Date   : 18-02-2025
    Topic  : Better vrsion of the Min and Max function. 
*/

#include<stdio.h>

// For deciding the datatype
#define DATA_TYPE int         // In this case, the int datatype.

typedef int (*Order)(DATA_TYPE, DATA_TYPE);  // A function pointer for comparison

// Comparison functions
int max(DATA_TYPE firstValue, DATA_TYPE secondValue);
int min(DATA_TYPE firstValue, DATA_TYPE secondValue);

// Function to find the maximum or minimum value based on the provided comparison function
DATA_TYPE findValue(const DATA_TYPE* array, int length, Order type);

int main(void)
{
    DATA_TYPE array[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);

    DATA_TYPE maxValue = findValue(array, length, max);
    DATA_TYPE minValue = findValue(array, length, min);

    fprintf(stdout, "Maximum Value: %d\n", maxValue);
    fprintf(stdout, "Minimum Value: %d\n", minValue);

    return 0;
}

// Function to compare for max (return 1 if firstValue is greater or equal)
int max(DATA_TYPE firstValue, DATA_TYPE secondValue)
{
    return firstValue >= secondValue;
}

// Function to compare for min (return 1 if firstValue is less or equal)
int min(DATA_TYPE firstValue, DATA_TYPE secondValue)
{
    return firstValue <= secondValue;
}

// Function to find the maximum or minimum value in the array based on comparison function
DATA_TYPE findValue(const DATA_TYPE* array, int length, Order type)
{
    if (!array || length <= 0 || !type)
    {
        return -1;  // Return an invalid value if the array is invalid or empty
    }

    DATA_TYPE value = array[0];

    for (int index = 1; index < length; ++index)
    {
        if (type(array[index], value))
        {
            value = array[index];
        }
    }

    return value;
}