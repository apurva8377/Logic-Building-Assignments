/////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Write a program which accepts number from user and return count of odd digits.
//  Author :        Apurva Vilas Shinde.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);
    printf("Count of Odd numbers is :%d", iRet);
    return 0;
}