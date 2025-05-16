////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Program which accepts number from user and print its number line.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //Convert negative input to positive.
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)    //Loop from -iNo to +iNo.
    {
        printf("%d\t",iCnt);       //Print each number in the range.
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\t");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}