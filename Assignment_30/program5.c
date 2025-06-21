///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  checks whether first and last bit is On or OFF.
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

    iMask2 =  iMask2 <<(32-1);



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
        printf("first & last bit is ON \n");
    }
    else
    {
        printf("first or last bit is OFF \n");
    }

    return 0;
}