///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Accept string from user and toggle the case.
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input  :  “Marvellous Multi OS”
    Output :   mARVELLOUS mULTI os

*/

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str + ('A' - 'a');
        }

        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string \n");
    scanf("%[^’\n’]s",arr);

    strtogglex(arr);

    printf("Modified string is %s \n",arr);

    return 0;
}