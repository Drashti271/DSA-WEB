#include<iostream>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    void setStudent(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
    }

    void getStudent() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    int n, rollNo;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    Student std[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        std[i].setStudent(rollNo, name);
    }

    for (int i = 0; i < n; i++) {
        std[i].getStudent();
    }

    return 0;
}
