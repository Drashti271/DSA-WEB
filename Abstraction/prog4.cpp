#include<iostream>
using namespace std;

class Addition{
    public:
        int a = 10 , b = 5;
    public:
        void add(){
            cout<<"Enter a: "<<a<<endl;
            cout<<"Enter b: "<<b<<endl;
            cout<<"Addition of a and b is: "<<a + b<<endl;
        }
};

class Substraction{
    public:
        int a = 10 , b = 5;
    public:
        void sub(){
            cout<<"Enter a: "<<a<<endl;
            cout<<"Enter b: "<<b<<endl;
            cout<<"Addition of a and b is: "<<a - b<<endl;
        }
};

class Multiplication{
    public:
        int a = 10 , b = 5;
    public:
        void mul(){
            cout<<"Enter a: "<<a<<endl;
            cout<<"Enter b: "<<b<<endl;
            cout<<"Addition of a and b is: "<<a * b<<endl;
        }
};

class Division{
    public:
        int a = 10 , b = 5;
    public:
        void div(){
            cout<<"Enter a: "<<a<<endl;
            cout<<"Enter b: "<<b<<endl;
            cout<<"Addition of a and b is: "<<a / b<<endl;
        }
};

int main()
{
    Addition a;
    a.add();

    Substraction s;
    s.sub();

    Multiplication m;
    m.mul();

    Division d;
    d.div();

    return 0;
}