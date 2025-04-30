#include<iostream>
using namespace std;

// 29 April 

class Student{

    public:
        static int rollNo;
        static void getStudent()
        {
            cout<<"Hello Students.."<<endl;
        }
};

int Student::rollNo = 21;

int main()
{
    Student::getStudent();
    cout<<"Roll No is: "<<Student::rollNo;

    return 0;
}