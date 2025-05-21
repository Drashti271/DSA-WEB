#include<iostream>
#include<vector>
#include <cstdlib>

using namespace std;

class Demo{
    vector <int> v1;

public:
    void addElement(int element)
    {
        v1.push_back(element);
    }

    void updateElement(int index , int element)
    {
        v1[index] = element;
    }

    void deleteElement(int index)
    {
        v1.erase(v1.begin() + index);
    }

    void printElement()
    {
        cout<<"vector is: ";
        
        for(int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }

    void clearVector() 
    {
        v1.clear();
    }
};

int main()
{
    Demo d;
    int ch;
    do{
        
        int index,element,size;
     
        cout<<"Enter 1 for Add Element"<<endl;
        cout<<"Enter 2 for Update Element"<<endl;
        cout<<"Enter 3 for Delete Element"<<endl;
        cout<<"Enter 4 for View Element"<<endl;
        cout<<"Enter 5 for clear vector"<<endl;
        cout<<"Enter 6 for insert multiple vector"<<endl;
        cout<<"Enter 0 for Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>ch;

        system("CLS");


        switch(ch)
        {
            case 1:
                cout<<"Enter Element: ";
                cin>>element;

                d.addElement(element);
            break;
            case 2:
                cout<<"Enter index: ";
                cin>>index;
                cout<<"Enter element: ";
                cin>>element;

                d.updateElement(index,element);
            break;
            case 3:
                cout<<"Enter Delete Element index: ";
                cin>>index;
                d.deleteElement(index);
            break;
            case 4:
                d.printElement();
            break;
            case 5:
                d.clearVector();
                cout<<"Vector cleared."<<endl;
            break;
            case 6:
                cout<<"Enter the size of vector: ";
                cin>>size;

                for(int i = 0; i < size; i++)
                {
                    cout<<"Enter element v1["<<i<<"]: ";
                    cin>>element;

                    d.addElement(element);
                }
            break;
            case 0:
                cout<<"Exit";
            break;
            default:
                cout<<"Invalid Choice..!";
            break;
                
        }


    } while(ch != 0);

    return 0;
}