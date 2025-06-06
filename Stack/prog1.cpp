#include<iostream>
using namespace std;

class Stack{
    public:
        int *array;
        int top;
        int capacity;

        Stack(int capacity)
        {
            this->capacity = this->capacity;
            this->array = new int[this->capacity];
            this->top = -1;
        }

        ~Stack()
        {
            delete[] array;
        }

        void push(int element);
        void pop();
        void peek();
        bool isEmpty();
        bool isFull();
        int size();
        void display();
};

void Stack::push(int element)
{
    if(!isFull())
    {
        this->top++;
        this->array[this->top] = element;
    }
    else
    {
        cout<<"Stack Overflow.";
    }
}

void Stack::pop()
{
    if(!isEmpty())
    {
        this->top--;
    }
    else
    {
        cout<<"Stack underflow.";
    }
}

void Stack::peek()
{
    if(isEmpty())
    {
        cout<<"Stack is underflow.";
    }
    else
    {
        cout<<this->array[this->top];
    }
}

bool Stack::isEmpty()
{
    return this->top == -1;
}

bool Stack::isFull()
{
    return this->top == this->capacity - 1;
}

int Stack::size()
{
    return this->top + 1;
}

void Stack::display()
{
    for(int i = 0; i <= top; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();

    s.pop();
    s.display();

    s.peek();

    return 0;
}