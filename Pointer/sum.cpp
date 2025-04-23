#include <iostream>
using namespace std;

int main()
{

    int a,b,sum;
    int *ptr1,*ptr2;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;

    cout<<"sum of a and b is: "<<sum;

    return 0;
}
