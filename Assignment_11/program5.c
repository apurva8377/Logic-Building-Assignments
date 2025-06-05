/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept number from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Input  : 8
    Output : 2  4  6  8  10  12  14  16
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
        iCnt * 2; 
        printf("%d\t", iCnt * 2);
       
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
