/*
    Author : Vansh Raj Bir.
    Date   : 20-02-2025
    Topic  : Printing an array reverse using recursion method.
*/

#include<stdio.h>

#define DATA_TYPE char

void printArray(const DATA_TYPE*,int,int);

int main(void)
{
    DATA_TYPE array[] = "!dlrow olleh";
    int length = sizeof(array) / sizeof(array[0]);
    
    printArray(array,0,length);
    
    return 0;
}

void printArray(const DATA_TYPE* array,int index,int length)
{
    if (index <= length)
    {
        printArray(array,index + 1,length);
        
        fprintf(stdout,"%c",array[index]);    // Back Track.
    }
}