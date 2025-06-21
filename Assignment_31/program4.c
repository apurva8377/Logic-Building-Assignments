///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  accept one number from user and toggle 7th and 10th bit of that number. return modified number
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 137
    Output : 713
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

    iMask = (iMask1 ^ iMask2);

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    int  iLocation1 = 0, iLocation2 = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter position 1 \n");
    scanf("%d",&iLocation1);

    printf("Enter position 2\n");
    scanf("%d",&iLocation2);

    iRet = ToggleBit(iValue,iLocation1,iLocation2);

    printf("Modified number is %d \n",iRet);
    return 0;
}