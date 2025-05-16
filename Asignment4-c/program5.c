////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accept number from user and return difference between summation of all its factors and non factors.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    //Loop from 1 to iNo-1
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact +iCnt;          //Add to factors sum
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;    //Add to non-factors sum
        }
    }

    return (iSumFact - iSumNonFact);              //return the difference
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);
    return 0;
}