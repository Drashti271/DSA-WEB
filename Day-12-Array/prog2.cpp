#include<iostream>
using namespace std;

int main(){

    int a[5];

    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>a[i];
    }
    cout<<endl<<"---------------"<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<"element of a["<<i<<"] : "<<a[i]<<endl;
    }

    return 0;
}