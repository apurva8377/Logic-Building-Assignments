///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Recursive program which accept number from user and return its factorial.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
///////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
int Fact(int iNo) 
{ 
    static int iFact = 1;
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        Fact(--iNo );
        return iFact;

    }

} 
int main() 
{ 
    int iValue = 0, iRet = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 

    iRet = Fact(iValue);

    printf("%d\n",iRet); 

    return 0; 
}
