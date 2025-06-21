///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Accept string from user and convert it into upper case.
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input :“Marvellous Multi OS”
    Output :MARVELLOUS MULTI OS

*/

#include<stdio.h>

void struprx(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str + ('A' - 'a');
        }
        str++;
    
    }
}

int main()
{
    char arr[20];

    printf("Enter string \n");
    scanf("%[^’\n’]s",arr);

    struprx(arr);

    printf("Modified string is %s \n",arr);

    return 0;
}