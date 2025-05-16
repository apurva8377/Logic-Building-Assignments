/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept amount in US dollar and return its corresponding value in Indian currency.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollerToINR(int iNo)
{
    float INR = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    INR = iNo * 85.50;

    return INR;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    fRet = DollerToINR(iValue);

    printf("Value in INR is %f", fRet);

    return 0;
}