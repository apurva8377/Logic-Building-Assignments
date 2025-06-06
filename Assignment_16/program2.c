/////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 4   iCol = 4
// Output :  *  *  *  *
//           *  *  *
//           *  *
//           * 

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow < 0) 
    {
        iRow = -iRow;
    }
    if (iCol < 0) 
    {
        iCol = -iCol;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= i; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}  

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}