///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  checks whether 7th & 15th & 21st , 28th bit is On or OFF.
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
    UINT iMask4 = 1;

    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (7-1);
    iMask2 =  iMask2 <<(15-1);
    iMask3 =  iMask3 <<(21-1);
    iMask4 =  iMask4 <<(28-1);


    iMask = iMask1 | iMask2 | iMask3 | iMask4;

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
        printf("7th & 15th & 21st , 28th bit is ON\n");
    }
    else
    {
        printf("7th & 15th & 21st , 28th bit is OFF \n");
    }

    return 0;
}