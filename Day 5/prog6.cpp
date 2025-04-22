#include<iostream>
using namespace std;

int main(){
     
    int a,b;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    if(a > b)
    {
        cout<<"A is greater than B.";
    }
    else if(a < b)
    {
        cout<<"B is greater than A.";
    }
    else
    {
        cout<<"A and B are equal.";
    }

    return 0;
}