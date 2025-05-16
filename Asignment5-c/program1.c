/////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Program which accepts number from user and print that number of $ & * on screen.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)              //Convert to positive if negative
    {
        iNo = -iNo;
    }

    //Print $ and * alternatively , iNo times each.
    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("$\t");      //Odd positions : print $
        }
        else
        {
            printf("*\t");       //Even positions : print *
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}