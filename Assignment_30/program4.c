///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  checks whether 7th & 8th & 9th bit is On or Off
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
    UINT iMask3 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (7-1);
    iMask2 =  iMask2 <<(8-1);
    iMask3 =  iMask3 <<(9-1);

    iMask = iMask1 | iMask2 | iMask3;

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
        printf("7th & 8th & 9th bit is On\n");
    }
    else
    {
        printf("7th & 8th & 9th bit is OFF\n");
    }

    return 0;
}