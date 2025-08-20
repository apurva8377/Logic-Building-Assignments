//////////////////////////////////////////////////////////////////////////
// 
//    File name    :- program4.java
//    Description  :- Write a program which accepts a string from user 
//                    and display below pattern.
//    Author name  :- Apurva Vilas Shinde
//    Date         :- 20/08/2025
//
//////////////////////////////////////////////////////////////////////////

// INPUT:  Hello

/* OUTPUT:
            H   e   l   l   o
            H   e   l   l   
            H   e   l   
            H   e
            H
            H   
            H   e     
            H   e   l     
            H   e   l   l  
            H   e   l   l   o  
*/

import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int length = str.length();
     
        for(int i = length; i >= 1; i--)   
        {
            for(int j = 0; j < i; j++) 
            {
                System.out.print(str.charAt(j) + "\t");
            }
            System.out.println();
        }

        for(int i = 1; i <= length; i++)   
        {
            for(int j = 0; j < i; j++) 
            {
                System.out.print(str.charAt(j) + "\t");
            }
            System.out.println();
        }
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter a string : ");
        String iValue = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue);
    }
}
