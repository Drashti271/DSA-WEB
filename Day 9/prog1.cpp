#include<iostream>
using namespace std;

int main(){
    int i,sum = 0,n;

    cout<<"Enter n: ";
    cin>>n;
    i = 1;

    while(i <= n)
    {
        sum += i;
        i++;
    }

    cout<<"sum of "<< n <<" is: "<<sum;

    return 0;
}
