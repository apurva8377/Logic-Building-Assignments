/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Write a program which accepts a string from user and display it in reverse order.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: "MarvellouS"
// Output: "SuollevraM"

#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move end pointer to last character
    while (*end != '\0')
    {
        end++;
    }
    end--; // Point to last valid character

    // Swap characters from start and end
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String: %s\n", str);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    Reverse(Arr);

    return 0;
}