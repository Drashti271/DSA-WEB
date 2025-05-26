#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    int n;

    cout<<"Enter the number of nodes: ";
    cin>>n;

    if(n <= 0)
    {
        cout<<"invalid number of nodes."<<endl;

        return 0;
    }

    Node *head = NULL;
    Node *current = NULL;

    head = new Node();
    cout<<"Enter data for node 1: ";
    cin>>head->data;
    head->next = NULL;

    current = head;

    for (int i = 2; i <= n; i++) {
        Node *ptr = new Node();
        cout<<"Enter data for node "<<i<<": ";
        cin>>ptr->data;
        ptr->next = NULL;
        current->next = ptr;
        current = ptr;
    }

    Node *ptr = head;

    cout<<"Linked list: ";

    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;

    ptr = head;
    int Index = 1;
    while(ptr != NULL)
    {
        cout<<"Node "<<Index<<": "<<ptr<<" - "<<ptr->data<<" - "<<ptr->next<<endl;
        ptr = ptr->next;
        Index++;
    }

    return 0;
}