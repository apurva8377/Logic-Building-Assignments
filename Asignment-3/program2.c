// Write a program which accept number from user and print even factor of that number.
// input : 24
// Output : 1 2 4 6 8 12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i =0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1; iCnt <= iNo / 2; iCnt++ )
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}