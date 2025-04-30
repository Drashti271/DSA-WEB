#include<iostream>
using namespace std;

int main()
{

    int a = 10;
    int &b = a;

    b = 5;

    cout<<"a is: "<<a;

    return 0;
}