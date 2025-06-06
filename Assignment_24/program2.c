/////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Write a program which accepts a string from user and counts the number of small characters.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: Marvellous
// Output: 9

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(Arr);

    printf("Number of Small letters = %d\n", iRet);

    return 0;
}