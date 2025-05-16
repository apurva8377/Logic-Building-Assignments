/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Program which accepts number from user and if number is less than 50 then print small, 
//                  if it is greater than 50 and less than 100 then print medium, if it is greater than 100 
//                  then print large.
//  Author :        Apurva Vilas Shinde
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Number(int iNo)
{
   if(iNo <50)
   {
    printf("Number is Small.\n");
   } 
   if((iNo >= 50) && (iNo <= 100))
   {
    printf("Number is Medium.\n");
   }
   if(iNo > 100)
   {
    printf("Number is large.\n");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}