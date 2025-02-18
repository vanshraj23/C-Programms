/*
    Auhtor : Vansh Raj Bir
    Date   : 18-02-2025
    Topic  : Basic Calculator 
*/

#include<stdio.h>

int main(void)
{
    int num1;
    int num2;
    int choice;

    fprintf(stdout,"Enter First Number : ");
    fscanf(stdin,"%d",&num1);

    fprintf(stdout,"Enter Second Number : ");
    fscanf(stdin,"%d",&num2);

    printf("\t+----------------------------+\n");
    printf("\t|        Operations          |\n");
    printf("\t+----------------------------+\n");
    printf("\t| 1. | Addition              |\n");
    printf("\t| 2. | Subtraction           |\n");
    printf("\t| 3. | Multiplication        |\n");
    printf("\t| 4. | Division              |\n");
    printf("\t| 5. | Exit                  |\n");
    printf("\t+----------------------------+\n");

    do {
        fprintf(stdout,"Enter Choice (1-4): ");
        fscanf(stdin,"%d",&choice);
    
        switch (choice) 
        {
            case 1:
                fprintf(stdout,"Result : %d\n",num1 + num2);
                break;
            case 2:    
                fprintf(stdout,"Result : %d\n",num1 - num2);
                break;
            case 3:
                fprintf(stdout,"Result : %d\n",num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                {
                    fprintf(stdout,"Result : %d\n",num1 / num2);
                }
                else
                {
                    fprintf(stderr,"Can't divide by 0\n");
                }
                break;
            case 5:
                choice = 0;
                break;        
            default :
                fprintf(stderr,"InValid Input\n");
                break;    
        }       
    } while (choice != 0);

    return 0;
}