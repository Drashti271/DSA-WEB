#include<iostream>
using namespace std;

int main(){

    int s,square;
    int *ptrS;
    
    cout<<"Enter side of square: ";
    cin>>square;

    ptrS = &s;

    square = (*ptrS)*(*ptrS);

    cout<<"Square of side: "<<square;
    
    return 0;
}