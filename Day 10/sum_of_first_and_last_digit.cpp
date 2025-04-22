#include<iostream>
using namespace std;

int main(){

    int sum,i=1,num,lastDigit,firstDigit;

    cout<<"Enter Num: ";
    cin>>num;

    lastDigit = num % 10;

    while(num > 0)
    {
        firstDigit = num % 10;
        num /= 10;
    }

    cout<<"Sum of first and last Digit is: "<<firstDigit+lastDigit;

    return 0;
}