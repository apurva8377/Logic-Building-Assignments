
// Write generic program to accept N values from user and return smallest value.

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program5.cpp
// Description :  Generic program to accept N values from user and return smallesr values.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

template <class T>
T Minimum(T *arr, int iSize)
{
    T Min = 0;
    int i= 0;
    if((arr == NULL) || (iSize < 0))
    {
        return 1;
    }
    Min = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
    
}

int main()
{
    int iLength = 0, i = 0, iRet = 0;
    float fRet = 0.0f;

    cout<<"Enter how many elements you want enter\n";
    cin>>iLength;

    int *iArr = NULL;
    iArr = new int[iLength];

    cout<<"Enter array elements \n";

    for(i = 0; i < iLength; i++)
    {
        
        cin>>iArr[i];
    }
    
    iRet = Minimum(iArr,iLength);

    cout<<"Samllest element is  "<<iRet<<"\n";


    float *fArr = NULL;
    fArr = new float[iLength];

    cout<<"Enter array elements \n";

    for(i = 0; i < iLength; i++)
    {
        
        cin>>fArr[i];
    }
    
    fRet = Minimum(fArr,iLength);

    cout<<"Smallest element is  "<<fRet<<"\n";

    delete[]iArr;

    delete[]fArr;


    return 0;
}
