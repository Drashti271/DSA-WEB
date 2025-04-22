#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    if(a >= b)
    {
        cout<<"A is greater than or equal to B.";
    }
    else
    {
        cout<<"B is greater than A.";
    }

    return 0;
}