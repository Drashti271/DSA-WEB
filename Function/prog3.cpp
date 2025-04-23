#include<iostream>
using namespace std;

// TNRS

int sum(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    return a+b;
}

int main(){

    int ans;

    ans = sum();
    cout<<"sum: "<<ans<<endl;

    return 0;
}