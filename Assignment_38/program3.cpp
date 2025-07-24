
// Write generic program to accept N values from user and return addition of that values

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.cpp
// Description :  Generic program to accept N values from user and return addition of that values
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    int i= 0;
    if((arr == NULL) || (iSize < 0))
    {
        return 1;
    }
    for(i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
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
    
    iRet = AddN(iArr,iLength);

    cout<<"Addition of all number is "<<iRet<<"\n";


    float *fArr = NULL;
    fArr = new float[iLength];

    cout<<"Enter array elements \n";

    for(i = 0; i < iLength; i++)
    {
        
        cin>>fArr[i];
    }
    
    fRet = AddN(fArr,iLength);

    cout<<"Addition of all number is "<<fRet<<"\n";

    delete[]iArr;

    delete[]fArr;


    return 0;
}
