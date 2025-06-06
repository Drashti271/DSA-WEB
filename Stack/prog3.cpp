#include<iostream>
#include<vector>
using namespace std;

// STACK USING VECTOR

class Stack
{
public:
    vector<int> vec;

    Stack() {}

    void push(int element) 
    {
        vec.push_back(element);
    }

    void pop() 
    {
        if(!isEmpty()) 
        {
            vec.pop_back(); 
        } 
        else 
        {
            cout<<"Stack underflow."<<endl;
        }
    }

    void peek() 
    {
        if(!isEmpty()) 
        {
            cout<<vec.back()<<endl; 
        } 
        else 
        {
            cout<<"Stack is empty."<<endl;
        }
    }

    bool isEmpty() 
    {
        return vec.empty();
    }

    int size() 
    {
        return vec.size();
    }

    void display() 
    {
        if(isEmpty()) 
        {
            cout<<"Stack is empty."<<endl;
        } else 
        {
            for (int i = 0; i < vec.size(); i++) 
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {

    Stack s;

    s.push(100);
    s.push(200);
    s.push(300);

    s.display(); 

    s.pop(); 
    s.display(); 

    s.peek();

    return 0;
}
