/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept number of rows and number of columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Input  : iRow = 4     iCol = 3
    
    Output : 1  1  1  1
             2  2  2  2
             3  3  3  3
             4  4  4  4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
                printf("%d\t",i);
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enetr number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
