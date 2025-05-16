////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Program which accepts number from user and print that numbers till that number.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)    //Function to display numbers from 1 to iNo
{
    int iCnt = 0;

    if(iNo < 0)        //Convert negative input to positive.
    {
        iNo = -iNo;
    }

    // Print numbers from 1 to iNo.
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enetr number :\n");
    scanf("%d",&iValue);

    Display(iValue);       //Call function to display numbers

    return 0;
}