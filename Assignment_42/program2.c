///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Recursive program which accept number from user and return summation of its digits.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h> 
int Sum(int iNo) 
{ 
    static int iSum = 0;
    static int iDigit = 0;
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        Sum(iNo / 10);
        
    }
    return iSum;
    
} 
int main() 

{ 
    int iValue = 0, iRet = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 
    iRet = Sum(iValue); 

    printf("Sum is %d\n",iRet);

    return 0; 
}