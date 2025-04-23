#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr;

    ptr = &a;

    cout<<"Adress of alue: "<<*ptr<<endl;
    cout<<"alue of Adress: "<<ptr<<endl;

    return 0;
}