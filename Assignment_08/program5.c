/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Program which accept area in square feet and convert it into square meter.
//                  (1 square feet = 0.0929 Square meter)
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double SquareInMeter = iValue * 0.0929 ;
    return SquareInMeter ;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is %.6f\n",dRet);

    return 0;
}