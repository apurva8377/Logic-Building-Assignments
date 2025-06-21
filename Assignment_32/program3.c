///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  which accept one number and position from user and on that bit. return modified number
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

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo | iMask;

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

    iRet = OnBit(iValue,iLocation);

    printf("Modified  number is %d\n",iRet);

    return 0;
}