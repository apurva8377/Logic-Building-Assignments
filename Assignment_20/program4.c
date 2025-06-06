/////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   Accept N number of from user and accept Range, Display all elements form that range.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         Start: 60
//         End: 90
//         Elements:85 66 3 76 93 88
// Output: 85 66  76  88

// Input:   N: 6
//         Start: 30
//         End: 50
//         Elements:85 66 3 76 93 88
// Output:

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the Starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the Ending point : ");
    scanf("%d", &iValue2);

    if (iSize <= 0 || iValue1 > iValue2)
    {
        printf("Invalid input.\n");
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

    printf("Elements in range [%d - %d] are:\n", iValue1, iValue2);
    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0;
}