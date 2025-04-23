#include<iostream>
using namespace std;

// Recursion

int main(){

    int n;
    int fact(int n);

    cout<<"Enter n: ";
    cin>>n;

    cout<<"fact of "<<n<<" is "<<fact(n)<<endl;

    return 0;
}

int fact(int n){

    if(n <= 1)
        return 1;
    return n*fact(n-1);
}