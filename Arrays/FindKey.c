/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Finding a key in a given array.  
*/

#include<stdio.h>

#define DATA_TYPE int                                  // For desired data type

/* 
    Function to find a key in an array
    returns first index if key found,
    returns -1 if not found,
    returns -2 if array is empty or not valid.  
*/
int findKey(const DATA_TYPE*,int,DATA_TYPE);

int main(void)
{
    DATA_TYPE array[] = {0,2,5,8,4,6,9,3,1};
    int length = sizeof(array) / sizeof(array[0]);

    DATA_TYPE key;

    // Read and validate key input.
    fprintf(stdout,"Enter key you want to find : ");
    
    while (fscanf(stdin,"%d", &key) != 1) 
    {
        while (getchar() != '\n');                         // Clear invalid input
        fprintf(stdout,"Invalid input. Please enter an integer: ");
    }

    int keyIndex = findKey(array,length,key);

    if (keyIndex >= 0)
    {
        fprintf(stdout,"%d found at %d index in given array.\n",key,keyIndex);    
    } 
    else if (keyIndex == -1)
    {
        fprintf(stderr,"%d is not found in given array.\n",key);    
    } 
    else
    {
        fprintf(stderr,"Either Given array is not valid or Empty Array!\n");    
    }
    
    return 0;
}

int findKey(const DATA_TYPE* givenArray,int length,DATA_TYPE key)
{
    // Check if the array is valid and has a positive length
    if (!givenArray || length <= 0) return -2;       // Return -2 if the array is invalid or empty.

    // Search for the key in the array
    for (int index = 0; index < length; ++index)
    {
        if (key == givenArray[index])
        {
            return index;                           // Return the index if the key is found.
        }    
    }

    return -1;                                      // Returns -1 if key is not found.
}