#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    Node *head = NULL;
    head = new Node();
    head->data = 20;
    head->next = NULL;

    Node *current = NULL;
    current = new Node();
    current->data = 30;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 40;
    current->next = NULL;
    head->next->next = current;

    current = new Node();
    current->data = 50;
    current->next = NULL;
    head->next->next->next = current;

    Node *ptr = head;
    
    cout<<"Linked list: ";

    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;

    cout<<head<<" - "<<head->data<<" - "<<head->next<<endl;
    cout<<head->next<<" - "<<head->next->data<<" - "<<head->next->next<<endl;
    cout<<head->next->next<<" - "<<head->next->next->data<<" - "<<head->next->next->next<<endl;
    cout<<head->next->next->next<<" - "<<head->next->next->next->data<<" - "<<head->next->next->next->next<<endl;
    
    return 0;
}