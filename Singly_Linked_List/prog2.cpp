#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    Node *HEAD = NULL;
    HEAD = new Node();
    HEAD->data = 1;
    HEAD->next = NULL;

    Node *h2 = new Node();
    h2->data = 2;
    h2->next = NULL;
    HEAD->next = h2;

    Node *h3 = new Node();
    h3->data = 3;
    h3->next = NULL;
    h2->next = h3;

    Node *h4 = new Node();
    h4->data = 4;
    h4->next = NULL;
    h3->next = h4;

    Node *h5 = new Node();
    h5->data = 5;
    h5->next = NULL;
    h4->next = h5;

    cout<<HEAD<<"-"<<HEAD->data<<"-"<<HEAD->next<<endl;
    cout<<HEAD->next<<"-"<<h2->data<<"-"<<h2->next<<endl;
    cout<<h2->next<<"-"<<h3->data<<"-"<<h3->next<<endl;
    cout<<h3->next<<"-"<<h4->data<<"-"<<h4->next<<endl;
    cout<<h4->next<<"-"<<h5->data<<"-"<<h5->next<<endl;

    return 0;
}