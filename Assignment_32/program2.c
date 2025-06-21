///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  accept one number and position from user and off that bit. return modified number
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 10 2
    Output : 8
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
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

    int  iLocation = 0;;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter position  \n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Modified  number is %d\n",iRet);

    return 0;
}