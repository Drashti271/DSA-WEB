#include<iostream>
using namespace std;

void text()
{
    cout<<"Hello!"<<endl;
}

void get()
{
    cout<<"Good Morning!"<<endl;
    text();
}

int main(){

    get();

    return 0;
}
