#include<iostream>
using namespace std;

int main(){

    int a,b,div;
    int *ptr1,*ptr2;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    div = *ptr1 / *ptr2;

    cout<<"Division of a and b is: "<<div;

    return 0;
}