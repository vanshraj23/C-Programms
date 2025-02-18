/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Print Array on Formatted Way.
*/

#include<stdio.h>

#define DATA_TYPE int                                 // For desired data type. 

// Function to print 1D Array in formatted way.
void printArray(const DATA_TYPE*,int);

int main(void)
{
    DATA_TYPE array[] = {0,1,2,3,4,5,6,7,8,9};        // Data Acorrding to Data type of array. 
    int length = sizeof(array) / sizeof(array[0]);

    printArray(array,length);

    return 0;
}

void printArray(const DATA_TYPE* array,int length)
{
    if (!array || length <= 0)                        // Array validation and length > 0.  
    {
        fprintf(stderr,"Empty Array!\n");
        return;
    }
    
    fprintf(stdout,"Array (%d) : {",length);          // Formatted Printing.

    for (int index = 0; index < length; ++index)
    {
        fprintf(stdout,"%d",array[index]);
        if (index != length - 1)
        {
            fprintf(stdout,", ");
        }
    }

    fprintf(stdout,"}\n");
}