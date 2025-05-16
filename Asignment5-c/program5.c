////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Program which accepts N from user and print first 5 multiples of N.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)       //Convert negative number to positive
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=5; iCnt++)      //Loop from 1 to till 5 multiples of iNo.
    {
        iNo * iCnt;
        printf("%d\t",iCnt * iNo);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\t");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}