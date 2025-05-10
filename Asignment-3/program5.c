//Accept on character from user and check wether that character is vowel (a,e,i,o,u) or not.
// Input : E                  Output : TRUE
// Input : d                  Output : FALSE

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch) 
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        return TRUE;
    }
    return FALSE;
}

int main() 
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE) 
    {
        printf("It is Vowel\n");
    } else 
    {
        printf("It is not Vowel\n");
    }

    return 0;
}