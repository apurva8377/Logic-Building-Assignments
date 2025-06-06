/////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Accept Character from user. If character is small display its corresponding  capital character, and if it is small then display its corresponding capital. In other cases display as it is.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: Q
// Output: q

// Input: M
// Output: m

// Input: 4
// Output: 4

// Input: %
// Output: %

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Converted character: %c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Converted character: %c\n", ch - 32);
    }
    else
    {
        printf("Character is: %c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :");
    scanf("%c", &cValue);

    Display(cValue);
    return 0;
}