// Write a program which accept one number from user and print that number of even numbers on screen.
// input : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    } 

    for (int iCnt = 2 ; iCnt <= iNo; iCnt += 2 )
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}