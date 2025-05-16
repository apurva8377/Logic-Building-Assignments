/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Write a program which accepts number from user and count frequency of such digits which is less than 6.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
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
        if (iDigit < 6)
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

    iRet = Count(iValue);
    printf("Frequency of numbers less than 6 is :%d", iRet);
    return 0;
}