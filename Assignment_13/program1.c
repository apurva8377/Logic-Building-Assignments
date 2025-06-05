/////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Apurva Vilas Shinde
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

//Input  :  iRow = 4    iCol = 4
// Output :  A  B  C  D
//           A  B  C  D  
//           A  B  C  D
//           A  B  C  D  

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++) 
    {
        char ch = 'A';
        
        for(j = 1; j <= iCol; j++)  
        {
            printf("%c\t", ch);
            ch++;
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