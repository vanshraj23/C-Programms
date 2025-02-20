/*
    Author : Vansh Raj Bir.
    Date   : 20-02-2025
    Topic  : Calculating nth power of a number using recursion method.
*/

#include<stdio.h>

long power(int,int);

int main(void)
{
    int number;
    int nth;

    fprintf(stdout,"Enter a number : ");
    fscanf(stdin,"%d",&number);

    fprintf(stdout,"Enter nth power : ");
    fscanf(stdin,"%d",&nth);
    
    while (nth < 0)
    {
        fprintf(stdout,"Enter nth power >= 0 : ");
        fscanf(stdin,"%d",&nth);
    }

    long result = power(number,nth);

    fprintf(stdout,"%d^%d = %ld\n",number,nth,result);

    return 0;
}

long power(int number,int nth)
{
    if (nth <= 0 )
    {
        return 1;
    }
    
    return number * power(number,nth - 1);
}