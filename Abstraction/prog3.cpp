#include<iostream>
using namespace std;

class Demo{
public:
    int num = 125;
    string name = "Drashti";

public:
    void getDemo()
    {
        cout<<"Enter your num: "<<num<<endl;
        cout<<"Enter your name: "<<name<<endl;
    }
};

int main()
{

    Demo d;
    d.getDemo();
    
    return 0;
}