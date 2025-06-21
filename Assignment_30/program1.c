///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  checks whether 15th bit is On or OFF.
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 16704
    Output : 15th bit is ON

    Input : 8512
    Output: 15th bit is OFF
*/

#include<stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
    UINT iMask  = 0x00004000;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = FALSE;

    printf("Enter numbre \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}