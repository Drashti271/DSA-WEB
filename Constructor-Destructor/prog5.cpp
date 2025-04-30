#include<iostream>
using namespace std;

class Student{

    private:
        int rollNo;
        string name;

    public:
        Student(int rollNo, string name)
        {
            this->rollNo = rollNo;
            this->name = name;
            cout<<"Constructor..."<<endl;
        }

        ~Student()
        {
            cout<<"Destructor---"<<endl;
        }

        void getStudent()
        {
            cout<<"Roll No: "<<this->rollNo<<endl;
            cout<<"Name: "<<this->name<<endl;
        }
};

int main()
{
    Student std(21,"Drashti");
    std.getStudent();

    return 0;
}