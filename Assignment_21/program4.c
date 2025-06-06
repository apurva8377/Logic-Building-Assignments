/////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Accept N number of from user and display all such numbers which contains 3 digits in it.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         Elements:  8225 665 3 76 953 858
// Output: 665  953  858

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

void Digits(int Arr[], int iLength)
{
    printf("3-digit numbers are:\n");
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d  ", Arr[i]);
        }
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

    Digits(p, iSize);

    free(p);
    return 0;
}