/////////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Description :   Accept N number of from user and accept one another number as NO, check whether NO is present or not.
//  Author :        Apurva Vilas Shinde.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input:   N: 6
//         NO: 66
//         Elements:85 66 3 66 93 88
// Output: True

// Input:   N: 6
//         NO: 12
//         Elements:85 11 3 15 11 111
// Output: False

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int bool;
bool Check(int Arr[], int iLength, int iNo)
{
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter the number of elements :");
    scanf("%d", &iSize);

    printf("Enter the number :");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);
    if (bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    free(p);
    return 0;
}