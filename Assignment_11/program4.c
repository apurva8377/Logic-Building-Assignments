/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept number from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Input  : 4
    Output : #  1  *  #  2  *  #  3  *  #  4  *
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
        printf("#\t");
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
