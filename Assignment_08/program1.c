/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Program which accept radius od circle from user and calculate its area.
//                  Consider value of PI as 3.14 (Area = PI * Radius * Radius)
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float AOC = PI * fRadius * fRadius;
    return AOC;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :\t");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}