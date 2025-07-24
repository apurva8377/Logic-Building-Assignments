
// Write generic program to accept N values from user and return largest values.
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.cpp
// Description :  Generic program to accept N values from user and return largest values.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T Maximum(T *arr, int iSize)
{
    T Max = 0;
    int i= 0;
    if((arr == NULL) || (iSize < 0))
    {
        return 1;
    }
    Max = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
    
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
    
    iRet = Maximum(iArr,iLength);

    cout<<"Largest element is  "<<iRet<<"\n";


    float *fArr = NULL;
    fArr = new float[iLength];

    cout<<"Enter array elements \n";

    for(i = 0; i < iLength; i++)
    {
        
        cin>>fArr[i];
    }
    
    fRet = Maximum(fArr,iLength);

    cout<<"Largest element is  "<<fRet<<"\n";

    delete[]iArr;

    delete[]fArr;


    return 0;
}
