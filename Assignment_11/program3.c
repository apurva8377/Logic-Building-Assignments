/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept number from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Input  : 5
    Output : 1   *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t", iCnt);
       
       printf("*\t");
       
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enetr number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
