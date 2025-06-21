///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  accept one number from user and on its first 4 bits. return modified number
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 73
    Output : 79
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;;
    UINT iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Modified number is %d \n",iRet);
    return 0;
}