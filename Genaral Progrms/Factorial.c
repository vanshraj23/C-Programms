/*
    Author : Vansh Raj Bir
    Date   : 20-02-2025
    Topic  : Calculating factorial of a number.
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

long factorial(int number)
{
    long fact = 1;

    while (number)
    {
        fact *= number--;
    }
    
    return fact;
}