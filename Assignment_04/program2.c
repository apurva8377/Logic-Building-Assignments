///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   program which accepts number from user and display its factors in decreasing order.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    //Loop from iNo down to 1
    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
       if (iNo % iCnt == 0)      //Check if iCnt is a factor.
       {
        printf("%d\n",iCnt);      //Print factor.
       }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}