///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.c
// Description :  Accept string from user and count number of white spaces
// Autor       :  Apurva Vilas Shinde.
// Date        :  06/06/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input :“Marvellous”
    Output :0

    Input :“MarvellouS Infosystems”
    Output :1
    Input :“MarvellouS Infosystems by Piyush Manohar Khairnnar”
    Output :5
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^’\n’]s",arr);

    iRet = CountWhite(arr);

    printf("%d\n",iRet);

    return 0;
}