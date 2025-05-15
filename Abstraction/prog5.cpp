#include<iostream>
using namespace std;

class Student1{
public:
    int num = 101;
    string name = "Drashti";
public:
    void student1(){
        cout<<"Enter Your Roll No: "<<this->num<<endl;
        cout<<"Enter Your Name: "<<this->name<<endl;
    }

};

class Student2 : public Student1{
public:
    int num = 102;
    string name = "Sejal";
public:
    void student2(){
        cout<<"Enter Your Roll No: "<<this->num<<endl;
        cout<<"Enter Your Name: "<<this->name<<endl;
    }

};


class Student3 : public Student2{
public:
    int num = 103;
    string name = "Venisha";
public:
    void student3(){
        cout<<"Enter Your Roll No: "<<this->num<<endl;
        cout<<"Enter Your Name: "<<this->name<<endl;
    }

};


int main()
{
    Student1 s;
    s.student1();

    Student2 s2;
    s2.student2();

    Student3 s3;
    s3.student3();

    return 0;
}