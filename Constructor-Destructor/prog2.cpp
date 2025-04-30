#include<iostream>
using namespace std;

// DEEP COPY 

int main()
{
    int a = 10;
    int *b;

    b = &a;

    *b = 5;

    cout<<"a is: "<<a;

    return 0;
}