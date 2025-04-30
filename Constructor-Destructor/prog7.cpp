#include<iostream>
using namespace std;

class employee{

    public:
        int e_id;
        string e_name;

    public:
        void setEmployee();
        void getEmployee();
};

void employee::setEmployee()
{
    cout<<"Enter e_id: ";
    cin>>this->e_id;
    cout<<"Enter e_name: ";
    cin>>this->e_name;
}

void employee::getEmployee()
{
    cout<<"e_id: "<<this->e_id<<endl;
    cout<<"e_name: "<<this->e_name<<endl;
}
int main()
{
    employee emp;

    emp.setEmployee();
    emp.getEmployee();

    return 0;
}