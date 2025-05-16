///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   program which accept number from user and display its multiplication of factors.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Loop from 1 to iNo to multiply each number.
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   //Multiply current number with result
    }
    
    return iFact;    //return the final multiplication result(factorial)
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);
    
    return 0;
}