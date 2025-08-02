/////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.java
// Description :  Accept matrix and return largest number from both the diagonals
// Autor       :  Apurva Vilas Shinde
// Date        :  02/08/2025
////////////////////////////////////////////////////////////////////////////////////////////
/*
  Input :

  3 2 5 9
  4 3 2 2
  8 4 1 5
  3 9 7 5

  Output : 9
*/

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please Enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((i == j) || (i + j == Arr.length - 1))
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }

        return iMax;
    }
    
}

class program3
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of coloums : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();

        mobj.Display();
 
        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum number from both the Diagonal is : "+iRet);
    }
}