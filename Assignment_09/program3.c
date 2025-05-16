/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Program which accept number from user and count frequency of 2 in it.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

    return 0;
}