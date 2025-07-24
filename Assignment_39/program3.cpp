
// Write generic program to accept N values and search first occurrence of any specific value.


///////////////////////////////////////////////////////////////////////////////
// File Name   :  program3.cpp
// Description :  Generic program to accept N values and search first occurrence of any specific value.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 10 20 30 10 30 40 10 40 10 
    first occurance of  : 40
    Output :5
*/

#include<iostream>
using namespace std;

template <class T>

int FirstOccur(T *Arr,int iSize , T value)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    return i +1;

}


int main()
{

    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10 };
    int iRet =  FirstOccur(arr,9,40);

    cout<<"First occurance  of 40 is "<<iRet<<'\n';

    return 0;   
}
