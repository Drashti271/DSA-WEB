#include<iostream>
using namespace std;

// TSRN

void add(int a, int b){
    cout<<"sum: "<<a+b<<endl;
}

int main(){

    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    add(a,b);

    return 0;
}