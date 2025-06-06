/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Accept N number of from user and display summation of digits of each number.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         Elements:  8225 665 3 76 953 858
// Output: 17  17  3  13  17  21

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, iNum = 0, iSum = 0;

    printf("Summation of digits for each number:\n");

    for (i = 0; i < iLength; i++)
    {
        iNum = Arr[i];
        iSum = 0;

        while (iNum != 0)
        {
            iSum = iSum + (iNum % 10);
            iNum = iNum / 10;
        }

        printf("%d  ", iSum);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    if (iSize <= 0)
    {
        printf("Invalid size.\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);
    return 0;
}