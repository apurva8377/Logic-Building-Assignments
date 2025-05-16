///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   program which accept number from user and display all its non factors.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    //Loop from 1 to iNo-1.
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)             //Check if iCnt is NOT a factor
        {
            printf("%d\n",iCnt);        //print non-factor.
        }
    }
}

int main()
{
    int iValue = 0;
     printf("Enter number :\n");
     scanf("%d",&iValue);

     NonFact(iValue);
    return 0;
}