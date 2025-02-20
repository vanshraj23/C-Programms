/*
    Author : Vansh Raj Bir.
    Date   : 20-02-2025
    Topic  : Printing an array using recursion method.
*/

#include<stdio.h>

#define DATA_TYPE int

void printArray(const DATA_TYPE*,int,int);

int main(void)
{
    DATA_TYPE array[] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(array) / sizeof(array[0]);
    
    printArray(array,0,length);
    
    return 0;
}

void printArray(const DATA_TYPE* array,int index,int length)
{
    if (index <= length)
    {
        fprintf(stdout,"%d ",array[index]);
        
        printArray(array,index + 1,length);
    }
}