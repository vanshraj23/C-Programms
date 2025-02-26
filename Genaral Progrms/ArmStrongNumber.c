/*
    Author : Vans Raj Bir.
    Date   : 26-02-2025
    Topic  : Check given number is Asmstrong number or not.
*/

#include<stdio.h>
#include<stdbool.h>

bool isArmStrong(int);

int main(void)
{
    int num;

    printf("Enter Number : ");
    scanf("%d",&num);

    if (isArmStrong(num))
    {
        printf("%d is armstrong number.\n",num);
    }
    else
    {
        printf("%d is not armstrong number.\n",num);
    }

    return 0;
}

bool isArmStrong(int number)
{
    int tempNumber = number;
    int cal = 0;

    while (tempNumber)
    {
        int rem = tempNumber % 10;
        cal = cal + (rem * rem * rem);
        tempNumber /= 10;
    }
    
    if (number == cal)
    {
        return true;
    }
    return false;
}