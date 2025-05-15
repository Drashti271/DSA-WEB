#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw()
    {
        cout<<"Msg from draw.."<<endl;
    }

    virtual void area()
    {
        cout<<"Msg from area.."<<endl;
    }
};

int main()
{
    Shape obj;

    obj.draw();
    obj.area();

    return 0;
}