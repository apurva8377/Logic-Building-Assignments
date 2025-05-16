// Accept one character from user and convert case of that character.
// Input : a          Output : A
// Input : D          Output : d

#include <stdio.h>

void DisplayConvert(char cValue) 
{
    if (cValue >= 'A' && cValue <= 'Z') 
    {
        printf("Output: %c\n", cValue + 32);  // Convert to lowercase
    } else if (cValue >= 'a' && cValue <= 'z') 
    {
        printf("Output: %c\n", cValue - 32);  // Convert to uppercase
    } else 
    {
        printf("Invalid character\n");
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}