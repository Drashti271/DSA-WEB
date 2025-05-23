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
    head->data = 25;
    head->next = NULL;

    Node *n2 = new Node();
    n2->data = 30;
    n2->next = NULL;
    head->next = n2;

    Node *n3 = new Node();
    n3->data = 35;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 40;
    n4->next = NULL;
    n3->next = n4;

    Node *n5 = new Node();
    n5->data = 45;
    n5->next = NULL;
    n4->next = n5;

    cout<<head<<"-"<<head->data<<"-"<<head->next<<endl;
    cout<<head->next<<"-"<<n2->data<<"-"<<n2->next<<endl;
    cout<<n2->next<<"-"<<n3->data<<"-"<<n3->next<<endl;
    cout<<n3->next<<"-"<<n4->data<<"-"<<n4->next<<endl;
    cout<<n4->next<<"-"<<n5->data<<"-"<<n5->next<<endl;

    return 0;
}