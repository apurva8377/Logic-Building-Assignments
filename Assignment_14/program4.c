/////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 5   iCol = 5
// Output :  1  2  3  4  5
//          -1 -2 -3 -4 -5
//           1  2  3  4  5
//          -1 -2 -3 -4 -5
//           1  2  3  4  5

#include <stdio.h>

void Pattern(int iRow, int iCol) {
    for (int i = 1; i <= iRow; i++) {
        for (int j = 1; j <= iCol; j++) {
            if (i % 2 == 0)
                printf("-%d\t", j);
            else
                printf("%d\t", j);
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