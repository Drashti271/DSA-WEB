#include<iostream>
using namespace std;

template<typename T>
class Crud{
    T items[10];
    int count = 0;

public:
    void create(T item)
    {
        items[count] = item;
        count++;
    }

    void read()
    {
        if(count == 0)
        {
            cout<<"No Numbers."<<endl;
        }
        else
        {
            for(int i = 0; i < count; i++)
            {
                cout<<items[i]<<endl;
            }
        }
    }

    void upadte(T oldItem , T newItem)
    {
        for(int i = 0; i < count; i++)
        {
            if(items[i] == oldItem)
            {
                items[i] = newItem;
                cout<<"Number Updated."<<endl;
                return;
            }
        }
            cout<<"Number not found."<<endl;
    }

    void remove(T item)
    {
        for(int i = 0; i < count; i++)
        {
            if(items[i] = item)
            {
                for(int j = i; j < count - 1; j++)
                {
                    items[j] = items[j + 1];
                }
                count--;
                cout<<"Number deleted."<<endl;
                return;
            }
        }
        cout<<"Number not found."<<endl;
    }
};

int main()
{
    Crud<int> crud;
    crud.create(10);
    crud.create(20);
    crud.create(30);
    crud.read();
    crud.upadte(20,100);
    crud.remove(10);
    crud.read();

    return 0;
}