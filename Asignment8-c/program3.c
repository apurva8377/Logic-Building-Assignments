/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Program which accept distance in kilometer and convert it into meter.
//                  (1 kilometre = 1000 meter)
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int DistanceInMeter = iNo * 1000;
    return DistanceInMeter;
}

int main()
{
    int iValue = 0;
    
    int iRet = 0;

    printf("Enter distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
}