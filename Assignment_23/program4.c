/////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Accept character from user and check whether it is special symbol or not.(!,@,#,$,%,^,&,*).
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: %
// Output: TRUE

// Input: d
// Output:FALSE

#include <stdio.h>
#include <stdbool.h>

bool CheckSpecial(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :");
    scanf("%c", &cValue);

    bRet = CheckSpecial(cValue);

    if (bRet == true)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }
    return 0;
}