#include<iostream>
using namespace std;

int main(){

    float ptrPI = 3.14,r,area;
    float *ptrPI,*ptrR;
    
    cout<<"Enter r: ";
    cin>>r;

    ptrPI = &pi;
    ptrR = &r;
    
    area = (*ptrPI)*(*ptrR)*(*ptrR);

    cout<<"Area of circle: "<<area;

    return 0;
}