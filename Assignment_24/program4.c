/////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Write a program which accepts a string from user and it contains vowels it in or not.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: "marvellous"
// Output: TRUE

// Input: "Demo"
// Output: TRUE

// Input: "xyz"
// Output: FALSE

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' ||
            *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' ||
            *str == 'O' || *str == 'U')
        {
            return true; // vowel found
        }
        str++;
    }
    return false; // no vowel found
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    bRet = CheckVowel(Arr);
    if (bRet == true)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("Does not Contains Vowels");
    }

    return 0;
}