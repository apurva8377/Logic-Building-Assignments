///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  accept one number from user and toggle contents of first and last nibble of the number, return modified number                
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x0000000f;
    UINT iMask2 = 0xf0000000;
    UINT iResult = 0;

    iResult = iNo ^ iMask1;
    iResult = iNo ^ iMask2;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;


    printf("Enter number \n");
    scanf("%d",&iValue);

  
    iRet = ToggleBit(iValue);

    printf("Modified  number is %d\n",iRet);

    return 0;
}