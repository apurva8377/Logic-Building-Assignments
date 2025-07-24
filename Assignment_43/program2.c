/////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Recursive program which accept number from user and return largest digits.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Max(int iNo) 
{ 
    static int iDigit = 0;
    static int iMax = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        Max(iNo /10);
    }

    return iMax;
}
int main() 
{ 
    int iValue = 0, iRet = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = Max(iValue); 

    printf("%d\n",iRet); 

    return 0; 
} 
