#include<iostream>
using namespace std;

int main(){

    int i=1, a, b=0, c=1, n;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"febonacci series: ";

    while(i<=10)
    {
        a = b;
        b = c + a;
        c = a;

        cout<< a <<" ";
        i++;
    }
}