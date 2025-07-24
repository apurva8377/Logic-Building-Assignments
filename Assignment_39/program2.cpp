
// Write generic program to accept N values and count frequency of any specific value.

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.cpp
// Description :  Generic program to accept N values and count frequency of any specific value.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////

/*
    Input : 10 20 30 10 30 40 10 40 10 
    Value to check frequency : 10
    Output :4
*/




#include<iostream>
using namespace std;

template <class T>

int Frequency(T *Arr,int iSize , T value)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == value)
        {
            iCount++;
        }
    }
    return iCount;

}


int main()
{

    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10 };
    int iRet =  Frequency(arr,9,10);

    cout<<"Frequency of 10 is "<<iRet<<'\n';

    return 0;   
}
