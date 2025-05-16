/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Program which accept temperature in Fahrenheit and convert it into celcius.
//                  (1 celcius = (Fahrenheit - 32) * (5 / 9))
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double TempInCelcius = (fTemp - 32.0) * (5.0 / 9.0) ;
    return TempInCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is %f",dRet);

    return 0;
}