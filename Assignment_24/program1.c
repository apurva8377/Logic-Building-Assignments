/////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Write a program which accepts a string from user and counts the number of capital characters.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: Marvellous Multi OS
// Output: 4

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital letters = %d\n", iRet);

    return 0;
}