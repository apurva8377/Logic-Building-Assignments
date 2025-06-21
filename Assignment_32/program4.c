///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  accept one number from user and  position from user and toggle that bit. return modified number
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 10 3
    Output : 14
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;

}


int main()
{
    UINT iValue = 0, iRet = 0;

    int  iLocation = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter position  \n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("Modified  number is %d\n",iRet);

    return 0;
}