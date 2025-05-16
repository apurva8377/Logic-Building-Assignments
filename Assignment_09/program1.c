/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Program which accept number from user and display its digits in reverse.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}