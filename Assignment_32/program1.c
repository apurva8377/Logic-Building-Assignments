///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  aaccept one number and position from user check whether bit at that position is on or off
//                If bit is one return TURE otherwise return FALSE.
// Autor       :  Apurva Vilas Shinde.
// Date        :  18/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 10 2
    Output : TRUE
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = iPos;

    iResult = iNo & iMask;

   return(iResult == iMask);

}

int main()
{
    UINT iValue = 0, iRet = 0;
    bool bRet = false;

    int  iLocation = 0;;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter position  \n");
    scanf("%d",&iLocation);

   bRet = ChkBit(iValue,iLocation);

   if(bRet == true)
   {
        printf("Bit is ON at %d position\n",iLocation);
   }
   else
   {
        printf("Bit is OFF at %d position\n",iLocation);
   }

    return 0;
}