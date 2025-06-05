/////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 4   iCol = 4
// Output :  2   4   6   8   10
//           1   3   5   7   9
//           2   4   6   8   10
//           1   3   5   7   9


#include <stdio.h>

// Function to print even numbers
void PrintEven(int count) {
    int val = 2;
    for (int i = 1; i <= count; i++) {
        printf("%d\t", val);
        val += 2;
    }
}

// Function to print odd numbers
void PrintOdd(int count) {
    int val = 1;
    for (int i = 1; i <= count; i++) {
        printf("%d\t", val);
        val += 2;
    }
}

void Pattern(int iRow, int iCol) {
    for (int i = 1; i <= iRow; i++) {
        if (i % 2 != 0)
            PrintEven(iCol);
        else
            PrintOdd(iCol);
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