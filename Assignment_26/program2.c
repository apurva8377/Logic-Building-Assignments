///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Accept string from user and accept one character. Return frequency of that character
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////



/*
    Input : "Marvellous Multi OS "
             M
    Output : 2

    Input : "Marvellous Multi OS "
             W
    Output : 0
*/
#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0, i1= 0,i2=0;

    printf("Enter string:\n");
    scanf("%[^’\n’]s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);


    printf("Character frequency is %d\n",iRet);

    return 0;
}