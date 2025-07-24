////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Recursive program which display below pattern.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
////////////////////////////////////////////////////////////////////

#include<stdio.h> 
void Display(int iNo) 
{ 
    static char ch = 'a';
    if(iNo >= 1)
    {
        printf("%c\t",ch);
        ch++;
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
