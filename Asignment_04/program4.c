///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accept number from user and return summation of all its non factors.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)      //Loop from 1 to iNo-1.
    {
        if(iNo % iCnt != 0)                //If iCnt is NOT a factor.  
        {
            iSumNonFact = iSumNonFact + iCnt;    //Add it to sum.
        }
    }
    
    return iSumNonFact;                      //return total sum of non-factors.
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}