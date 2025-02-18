/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Reverse a number  
*/

#include<stdio.h>

int reverse(int);

int main(void)
{
    int number;

    fprintf(stdout,"Enter a Number : ");
    fscanf(stdin,"%d",&number);

    int reversedNumber = reverse(number);

    fprintf(stdout,"Reverse of %d : %d",number,reversedNumber);

    return 0;
}

int reverse(int number)
{
    int revs = 0;

    while (number)
    {
        int rem = number % 10;
        revs = revs * 10 + rem;
        number /= 10;
    }
    
    return revs;
}