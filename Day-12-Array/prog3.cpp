#include<iostream>
using namespace std;
int main(){

    int a[5],index,element;

    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter element "<<i<<" : ";
    }

    cout<<endl<<"-------------"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<"element of a["<<i<<"]"<<a[i]<<endl;
    }

    cout<<"Enter index for update: ";
    cin>>index;
    cout<<"Enter element for update: ";
    cin>>element;
    a[index] = element;
    cout<<endl<<"-------------"<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<"element of a["<<i<<"]"<<a[i]<<endl;
    }

    return 0;

}