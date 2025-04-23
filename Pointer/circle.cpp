#include<iostream>
using namespace std;

int main(){

    float PI = 3.14,r,area;
    float *ptrPI,*ptrR;
    
    cout<<"Enter r: ";
    cin>>r;

    ptrPI = &PI;
    ptrR = &r;
    
    area = (*ptrPI)*(*ptrR)*(*ptrR);

    cout<<"Area of circle: "<<area;

    return 0;
}
