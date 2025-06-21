///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  accept one number from user and toggle 7th bit of that number.
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////



/*
    Input : 137
    Output : 201
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);


    iRet = ToggleBit(iValue);

    printf("Modified number is %d \n",iRet);
    return 0;
}