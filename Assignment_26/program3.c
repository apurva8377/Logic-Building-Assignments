///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.c
// Description :  Accept string from user and accept one character return index of first occurrence of that character
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////



/*
    Input : "Marvellous Multi OS "
             M
    Output : 0

    Input : "Marvellous Multi OS "
             W
    Output : -1

    Input : "Marvellous Multi OS"
             e
    Output : 4
*/
#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = -1, i = 0;

    
    while(*str != '\0')
    {
        if(str[i] == ch)
        {
        
           iIndex = i;
           break;
        }
        i++;
    }
    

    return iIndex;
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

    iRet = FirstChar(arr, cValue);


    printf("First index of character is %d\n",iRet);

    return 0;
}