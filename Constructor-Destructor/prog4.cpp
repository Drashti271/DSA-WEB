#include<iostream>
using namespace std;

class Student{

    public:

    Student()
    {
        cout<<"consructor..."<<endl;
    }

    ~Student()
    {
        cout<<"Destructor---"<<endl;
    }
};

int main()
{
    Student std();

    return 0;
}