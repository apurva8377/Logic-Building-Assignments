/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//  Author :        Apurva Vilas Shinde
//  Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, evenSum = 0, oddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            evenSum = evenSum + Arr[iCnt];
        }
        else
        {
            oddSum = oddSum + Arr[iCnt];
        }

        return evenSum - oddSum;
    }
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}