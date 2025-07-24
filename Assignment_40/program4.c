///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.c
// Description :  Recursive program which display below pattern.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
///////////////////////////////////////////////////////////////////////////////

  

#include<stdio.h>

void Display() 
{ 
    static char ch = 'A';

    if((ch >= 'A') && (ch <= 'F'))
    {
         printf("%c\t",ch);
         ch++;
         Display();
    }

} 
int main() 
{ 
    Display(); 
    return 0; 
} 
