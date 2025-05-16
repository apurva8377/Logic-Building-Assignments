/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept single digit number from user and print it into word.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    switch (iNo)
    {
       case 0: printf("Zero\n"); break;
       case 1: printf("One\n"); break;
       case 2: printf("Two\n"); break;
       case 3: printf("Three\n"); break;
       case 4: printf("Four\n"); break;
       case 5: printf("Five\n"); break;
       case 6: printf("Six\n"); break;
       case 7: printf("Seven\n"); break;
       case 8: printf("Eight\n"); break;
       case 9: printf("Nine\n"); break;
       default: printf("Invalid input\n"); break;
    }
}

int main()
{
    int iValue = 0;
    
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    if(iValue >= 0 && iValue <=9)
    {
        Display(iValue);
    }
    else
    {
        printf("Please enter valid single digit input between 0 to 9.\n");
    }
    
    return 0;
}