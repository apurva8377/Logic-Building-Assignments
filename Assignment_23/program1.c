/////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Write a program which displays ASCII table. Table contains symbol, decimal, hexadecimal and Octal representation of every member from 0 to 255.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("--------------------------------------------------\n");
    printf("| Symbol\t| Decimal\t| Hex\t| Octal\t |\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if (i >= 32 && i <= 126)
        {
            printf("| %c\t\t| %d\t\t| %X\t| %o\t |\n", i, i, i, i);
        }
        else
        {
            printf("| Non-printable\t| %d\t\t| %X\t| %o\t |\n", i, i, i);
        }
    }

    printf("--------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}