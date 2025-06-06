/////////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Description :   Accept N number of from user and return product of all odd elements.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         Elements:  15 66 3 70 10 88
// Output: 45

// Input:   N: 6
//         Elements:  44 66 72 70 10 88
// Output: 0

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iProd = 1;
    int bOddFound = 0;

    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iProd *= Arr[i];
            bOddFound = 1;
        }
    }

    if (bOddFound == 0)
    {
        return 0;
    }

    return iProd;
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

    iRet = Product(p, iSize);
    printf("Product of all odd elements is : %d\n", iRet);

    free(p);
    return 0;
}