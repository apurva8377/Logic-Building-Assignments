/////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Write a program which accepts a string from user and returns difference between frequency of small characters and frequency of capital characters.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: MarvellouS
// Output: 6  (8-2)

#include <stdio.h>

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }

    return iSmall - iCapital; // difference as required
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    iRet = Difference(Arr);

    printf("Difference between small and capital letters = %d\n", iRet);

    return 0;
}