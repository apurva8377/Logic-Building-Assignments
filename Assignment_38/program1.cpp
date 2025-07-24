// Write generic program to multiply two numbers.

///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.cpp
// Description :  Generic program to multiply two numbers.
// Autor       :  Apurva Vilas Shinde
// Date        :  6/07/2025
///////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans =  no1 + no2 ;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<iRet<<"\n";

    float fRet = Multiply(10.2f,20.2f);
    cout<<fRet<<"\n";

    return 0;
}