//////////////////////////////////////////////////////////////////////////
// 
//    File name    :- program1.java
//    Description  :- Write a program which accepts number of rows and 
//                    columns from user and display below pattern.
//    Author name  :- Apurva Vilas Shinde
//    Date         :- 19/08/2025
//
//////////////////////////////////////////////////////////////////////////

// INPUT:  iRow = 4, iCol = 4

/* OUTPUT:
            A  B  C  D
            A  B  C  D
            A  B  C  D
            A  B  C  D
*/

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(iValue1, iValue2);
    }
}