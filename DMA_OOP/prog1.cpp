#include<iostream>
using namespace std;

// OOP WAY

int main()
{
    int choice;
    float num1,num2;

    cout<<"-----Simple Calculator-----"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    switch(choice)
    {
        case 1:
            cout<<"Addition is: "<<num1 + num2<<endl;
        break;
        case 2:
            cout<<"Substraction is: "<<num1 - num2<<endl;
        break;
        case 3:
            cout<<"Multiplication is: "<<num1 * num2<<endl;
        break;
        case 4:
            cout<<"Division is: "<<num1 / num2<<endl;
        break;
        default:
            cout<<"Invalid Choice..!";
    }

    return 0;
}