#include<iostream>
using namespace std;

// SHALLOW COPY 

int main(){
    
    int a = 10;
    int b;

    b = a;
    
    b = 5;

    cout<<"a is: "<<a<<endl;

    return 0;
}