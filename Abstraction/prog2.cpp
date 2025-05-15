#include<iostream>
using namespace std;

class Student{
    public:
        int num = 125;
    public:
        void getDemo()
        {
            cout<<"Num is: "<<num<<endl;
        }
};

class Faculty : public Student {
    public:
        virtual void getDemo1()
        {
            cout<<"Num is: "<<num<<endl;
        }
};

int main()
{

    Student s;
    Faculty f;

    s.getDemo();
    f.getDemo1();

    return 0;
}