///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  checks whether 5th & 18th bit is On or OFF
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (5-1);
    iMask2 =  iMask2 <<(18-1);

    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    UINT iValue = 0;
    bool bRet = FALSE;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th & 18th bit is ON \n");
    }
    else
    {
        printf("5th or 18th bit is OFF \n");
    }

    return 0;
}