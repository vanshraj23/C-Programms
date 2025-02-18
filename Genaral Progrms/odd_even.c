/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Check given is odd or even
*/

#include<stdio.h>
#include<stdbool.h>

bool isEven(int);
bool isOdd(int);

int main(void)
{
    int number;

    fprintf(stdout,"Enter a number : ");
    fscanf(stdin,"%d",&number);

    if (isEven(number))
    {
        fprintf(stdout,"%d is Even Number.\n",number);
    }
    
    if (isOdd(number))
    {
        fprintf(stdout,"%d is Odd Number.\n",number);
    }
    
    return 0;
}

bool isEven(int number)
{
    return ((number % 2) == 0);
}

bool isOdd(int number)
{
    return ((number % 2) == 1);
}