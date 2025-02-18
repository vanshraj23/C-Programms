/*
    Author : Vansh Raj Bir.
    Date   : 18-02-2025
    Topic  : Check a given is Palindrome or not.
*/

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int);

int main(void)
{
    int number;

    fprintf(stdout,"Enter a number : ");
    fscanf(stdin,"%d",&number);

    if (isPalindrome(number))
    {
        fprintf(stdout,"%d is palindrome number.\n",number);    
    }
    else
    {
        fprintf(stdout,"%d is not palindrome number!\n",number);    
    }

    return 0;
}

bool isPalindrome(int number)
{
    int tempNumber= number;
    int revs = 0;

    while (tempNumber)
    {
        int rem = tempNumber % 10;
        revs = revs * 10 + rem;
        tempNumber /= 10;
    }
    
    if (number == revs)
    {
        return true;
    }
    return false;
}