#include<iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    int marks[3];

public:

    Student(int rollNo, string name, int marks[3]) 
    {
        this->rollNo = rollNo;
        this->name = name;
        for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
    }

    void setStudent(int rollNo, string name, int marks[3]) 
    {
        this->rollNo = rollNo;
        this->name = name;
        for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
    }

    void getStudent() 
    {
        cout << "Roll No is: " << this->rollNo << endl;
        cout << "Name is: " << this->name << endl;
        cout << "Marks are: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    void calculateGrades() 
    {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }

        float avg = total / 3.0f; 
        cout << "Total is: " << total << endl;
        cout << "Average is: " << avg << endl;
    }

};

int main() 
{

    int marks1[3] = {85, 60, 75};
    int marks2[3] = {75, 90, 67};
    int marks3[3] = {95, 85, 80};

    Student students[] = 
    {
        Student(1, "Dhruv", marks1),
        Student(2, "Sejal", marks2),
        Student(3, "Venisha", marks3)
    };

    int choice;

    cout << "Enter the student number (1-3) to view their details or 0 to exit: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            students[0].getStudent();
            students[0].calculateGrades();
            break;
        case 2:
            students[1].getStudent();
            students[1].calculateGrades();
            break;
        case 3:
            students[2].getStudent();
            students[2].calculateGrades();
            break;
        case 0:
            cout << "Exit program." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 3." << endl;
    }

    return 0;
}
