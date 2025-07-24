
// Write generic program to accept N values and search last occurrence of any specific value.


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.cpp
// Description :  Generic program to accept N values and search last occurrence of any specific value.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 10 20 30 10 30 40 10 40 10 
    Last occurance of  : 40
    Output :8
*/

#include<iostream>
using namespace std;

template <class T>

int LastOccur(T *Arr,int iSize , T value)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == value)
        {
            iCount = i;
        }
    }
    return iCount + 1;

}


int main()
{

    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10 };
    int iRet =  LastOccur(arr,9,40);

    cout<<"Last occurance  of 40 is "<<iRet<<'\n';

    return 0;   
}
