///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  accept one number from user and off 7th bit of that number if it is on, return modified number
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 79
    Output : 15
*/


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iResult = 0;

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;;
    UINT iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modified number is %d \n",iRet);
    return 0;
}