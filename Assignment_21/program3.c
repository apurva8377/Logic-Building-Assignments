/////////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Description :   Accept N number of from user and return difference between largest number and smallest number.
//  Author :        Apurva Vilas Shinde..
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         Elements:  85 66 3 66 93 88
// Output: 90 (93 - 3)

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];

    for (int i = 1; i < iLength; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMax - iMin;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    iRet = Difference(p, iSize);
    printf("Difference is : %d\n", iRet);

    free(p);
    return 0;
}