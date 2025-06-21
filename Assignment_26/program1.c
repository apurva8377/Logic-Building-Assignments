///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Accept string from user and accept one character,Check whether that character is present in string or not
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : "Marvellous Multi OS "
             e
    Output : True

    Input : "Marvellous Multi OS "
             W
    Output : False

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkChar(char *str, char ch)
{
    bool bFalg = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           bFalg = TRUE;
           break; 
        }
        str++;
    }

    return bFalg;
}


int main()
{
    char arr[20];
    char cValue;
    bool bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^’\n’]s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}