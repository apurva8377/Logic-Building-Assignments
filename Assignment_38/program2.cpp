
// Write generic program to find largest number from three numbers.

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.cpp
// Description :  Generic program to find largest number from three numbers.
// Autor       :  Apurva Vilas Shinde
// Date        :  6/07/2025
///////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>

T Max( T no1,T no2 ,T no3)
{
    T Max;  
    if((no1 > no2 )&& (no1 > no3))
    {
        Max = no1;
    }
    else if((no2 > no1 ) && (no2 > no3))
    {
        Max = no2;
    }
    else
    {
        Max = no3;
    }

    return Max;
    
}

int main()
{
    int iRet = Max(10,222,334);
    cout<<iRet<<"\n";

    float fRet = Max(10.2f,20.2f,4.0f);
    cout<<fRet<<"\n";

    return 0;
}
