#include<iostream>
using namespace std;

int main(){

    int num,sum=0,i=1,lastDigit;

    cout<<"Enter Num: ";
    cin>>num;

    while(num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }

    cout<<"Sum of all Digits: "<<sum;

    return 0;
}