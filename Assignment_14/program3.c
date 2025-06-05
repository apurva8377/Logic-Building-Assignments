/////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 5   iCol = 5
// Output :  a  b  c  d  e
//           1  2  3  4  5
//           a  b  c  d  e
//           1  2  3  4  5
//           a  b  c  d  e

#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= iRow; i++) {
        if (i % 2 != 0) 
        {  
            char ch = 'a';
            for (j = 1; j <= iCol; j++) 
            {
                printf("%c\t", ch);
                ch++;
            }
        } 
        else 
        {
            for (j = 1; j <= iCol; j++) 
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}