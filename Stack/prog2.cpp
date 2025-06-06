#include<iostream>
using namespace std;

// STACK USING LINKED LIST

class Stack 
{
public:
    struct Node 
    {
        int data;
        Node* next;
    };

    Node* top;

    Stack() 
    {
        top = NULL;
    }

    ~Stack() 
    {
        while(!isEmpty()) 
        {
            pop();
        }
    }

    void push(int element);
    void pop();
    void peek();
    bool isEmpty();
    int size();
    void display();
};

void Stack::push(int element) 
{
    Node* newNode = new Node();
    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

void Stack::pop() 
{
    if(!isEmpty()) 
    {
        Node* temp = top;
        top = top->next;
        delete temp;
    } 
    else 
    {
        cout<<"Stack underflow."<<endl;
    }
}

void Stack::peek() 
{
    if (isEmpty()) 
    {
        cout<<"Stack is empty."<<endl;
    } 
    else 
    {
        cout<<top->data<<endl;
    }
}

bool Stack::isEmpty() 
{
    return top == NULL;
}

int Stack::size() 
{
    int count = 0;
    Node* temp = top;

    while (temp != NULL) 
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void Stack::display() 
{
    if (isEmpty()) 
    {
        cout<<"Stack is empty."<<endl;
    } 
    else 
    {
        Node* temp = top;

        while (temp != NULL) 
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display(); 

    s.pop(); 
    s.display();

    s.peek(); 

    return 0;
}
