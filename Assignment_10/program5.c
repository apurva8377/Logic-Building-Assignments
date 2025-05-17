/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Write a program which accepts number from user and return difference between summation of even digits and odd digits.
//  Author :        Apurva Vilas Shinde.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of even and odd digits is : %d\n", iRet);

    return 0;
}