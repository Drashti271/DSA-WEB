#include<iostream>
using namespace std;

// OOP WAY

class Student{
public:
    int rollNo;
    string name;
    float marks;

    void display()
    {
        cout<<"Student Roll No: "<<rollNo<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }

};

int main()
{

    Student s;

    cout<<"Enter Your Roll no: ";
    cin>>s.rollNo;

    cout<<"Enter Your Name: ";
    cin>>s.name;

    cout<<"Marks: ";
    cin>>s.marks;
    
    cout<<"Student Information: "<<endl;
    s.display();

    return 0;
}