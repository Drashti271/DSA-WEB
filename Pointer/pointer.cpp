#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr;

    ptr = &a;

    cout<<"Adress of value: "<<*ptr<<endl;
    cout<<"Value of Adress: "<<ptr<<endl;

    return 0;
}
