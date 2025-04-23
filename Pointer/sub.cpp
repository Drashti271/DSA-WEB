#include<iostream>
using namespace std;

int main(){

    int a,b,sub;
    int *ptr1,*ptr2;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    sub = *ptr1 - *ptr2;

    cout<<"Substraction of a and b is: "<<sub;

    return 0;
}
