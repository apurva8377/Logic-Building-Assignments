///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Recursive program which accept number from user and return its product of digits.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Mult(int iNo) 
{ 
    static int iDigit = 0;
    static int iMul = 1;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        
        Mult(iNo / 10);
        return iMul;
    }
} 
int main() 
{ 
    int iValue = 0, iRet = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = Mult(iValue); 

    printf("%d\n",iRet); 

    return 0; 
} 
