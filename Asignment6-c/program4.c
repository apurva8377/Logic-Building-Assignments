////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accept number from user and display its table.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= iNo; iCnt++)
    {
        iNo * iCnt;
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}