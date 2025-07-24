///////////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Recursive program which accept string from user and count number of small charcters.
// Autor       :  Apurva Vilas Shinde
// Date        :  23/07/2025
//////////////////////////////////////////////////////////////////////////////////////////////////////

   
#include<stdio.h>
int Small(char *str) 
{ 
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }

        Small(++str);
    }

    return iCount;

} 
int main() 
{ 
    int iRet = 0; 
    char arr[20]; 

    printf("Enter string : "); 
    scanf("%[^'\n]s",arr); 

    iRet = Small(arr); 

    printf("%d\n",iRet); 

    return 0; 
}
