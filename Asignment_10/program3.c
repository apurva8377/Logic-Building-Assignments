/////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Write a program which accepts number from user and return count of digits between 3 and 7.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit >= 3 && iDigit <= 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("Count of numbers between 3 and 7 is :%d", iRet);
    return 0;
}