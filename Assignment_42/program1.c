///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Recursive program which accept number from user and display below pattern.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 
void Display(int iNo) 
{ 
    if(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        Display(--iNo);
        
    }
} 
int main() 
{ 
    int iValue = 0; 

    printf("Enter number : "); 
    scanf("%d",&iValue); 
    Display(iValue); 

    return 0; 
}
