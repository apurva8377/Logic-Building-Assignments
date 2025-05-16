////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Program which accepts N from user and print all odd numbers upto N.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)      //Convert negative input into positive.
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)          //Condition to get ODD value
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\t");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}