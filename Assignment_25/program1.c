///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c
// Description :  Accept string from user and convert it into lower case.
// Autor       :  Apurva Vilas Shinde
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input :“Marvellous Multi OS”
    Output :marvellous multi os

*/
#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(arr);

    printf("Modified string is %s \n",arr);

    return 0;
}

