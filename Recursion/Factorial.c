/*
    Author : Vansh Raj Bir
    Date   : 20-02-2025
    Topic  : Calculating factorial of a number using recursion method.
*/

#include<stdio.h>

long factorial(int);

int main(void)
{
    int number;

    fprintf(stdout,"Enter a number : ");
    fscanf(stdin,"%d",&number);
    
    while (number < 0)
    {
        fprintf(stdout,"Enter a number > 0: ");
        fscanf(stdin,"%d",&number);
    }
    

    long fact = factorial(number);

    fprintf(stdout,"%d! = %ld",number,fact);

    return 0;
}

// Time complexity O(2^n), where n is number itself. 
long factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    
    return number * factorial(number - 1);
}