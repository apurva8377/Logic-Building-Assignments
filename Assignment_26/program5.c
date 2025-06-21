///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept string from user and  reverse that string in place
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////



/*
    Input : "abcd"
             
    Output: "dcba"

    Input : " abba"
             
    Output : "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp ='\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}
int main()
{
    char arr[20];
    printf("Enter string \n");
    scanf("%[^’\n’]s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}