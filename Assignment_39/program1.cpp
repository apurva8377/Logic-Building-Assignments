///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.cpp
// Description :  Generic program which accept one value and one number from user. Print that value that number of times on screen.
// Autor       :  Apurva Vilas Shinde
// Date        :  7/07/2025
///////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>

void Display(T value, int size)
{
    int i = 0; 

    for(i = 0; i < size; i++)
    {
        cout<<value<<"\t";
    }

    cout<<"\n";

}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    return 0;
}
