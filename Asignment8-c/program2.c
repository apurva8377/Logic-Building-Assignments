/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Program which accept width and height of rectangle from user and calculate its area.
//                  (Area = Width * Height)
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float AreaOfRectangle = fWidth * fHeight;
    return AreaOfRectangle;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width :\t");
    scanf("%f",&fValue1);

    printf("Enter height :\t");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %f",dRet);

    return 0;
}