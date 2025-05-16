// Program to Divide two numbers.

#include<stdio.h>

//Function to Divide two integers
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)           //Check for Division by zero.
    {
        return -1;          //Return -1 to indicate Error
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    if(iRet == -1)
    {
        printf("Error : Division by zero is not allowed.\n");
    }
    else
    {
    printf("Division is %d\n",iRet);
    }
    return 0;

}