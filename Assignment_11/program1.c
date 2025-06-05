/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept number from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Input  : 5
    Output : A   B   C   D   E
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1; iCnt <= iNo; iCnt++ , ch++)
    {
        printf(" %c\t", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}