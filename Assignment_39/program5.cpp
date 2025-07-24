
// Write generic program to accept N values and reverse the contents.



///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.cpp
// Description :  Generic program to accept N values and reverse the contents
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


/*
    Input : 10 20 30 10 40 40
    Output : 40 40 10 30 20 10
*/

#include<iostream>
using namespace std;

template <class T>

void Reverse(T *Arr, int iSize)
{

    T *start = Arr;
    T *end = Arr + iSize -1;
    T temp;

    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        *end--;
        *start++;
    }

}
int main()
{
    int arr[] = { 10, 20, 30, 10, 40, 40};
    int i = 0;

    cout<<"Original array \n";
    for(i = 0 ; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    Reverse(arr,6);
    cout<<"\nReverse  array \n";
    for(i = 0 ; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    return 0;

}
