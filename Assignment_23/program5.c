/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: A
// Output: DECIMAL  65
//         OCTAL    0101
//     HEXADECIMAL  0X41

#include <stdio.h>

void Display(char ch)
{
    printf("DECIMAL     : %d\n", ch);
    printf("OCTAL       : %o\n", ch);
    printf("HEXADECIMAL : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}