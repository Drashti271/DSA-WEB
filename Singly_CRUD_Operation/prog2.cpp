#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linked
{
    public:
        Node *head;
        int size;

    Linked()
    {
        this->head = NULL;
        this->size = 0;
    }

    void insertAtFront(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        this->head = newNode;
        this->size++;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if(this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->size++;
    }

    void insertAtIndex(int index , int data)
    {
       if(index < 0 || index > size)
        {
            cout<<"Invalid Choice"<<endl;
            return;
        }

        if(index == 0)
        {
            insertAtFront(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *ptr = this->head;

        for(int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
        }

        newNode->next = ptr->next;
        ptr->next = newNode;
        this->size++;
    }

    void deleteAtFront()
    {
        if(this->head == NULL)
        {
            cout<<"List is empty.";
            return;
        }

        Node *ptr = this->head;
        this->head = this->head->next;
        delete ptr;
        this->size--;
    }

    void deleteAtEnd()
    {
        if(this->head == NULL)
        {
            cout<<"List is empty.";
            return;
        }

        if(this->head->next == NULL)
        {
            delete this->head;
            this->head = NULL;
        }
        else
        {
            Node *ptr = this->head;

            while(ptr->next != NULL && ptr->next->next != NULL)
            {
                ptr = ptr->next;
            }

            delete ptr->next;
            ptr->next = NULL;
        }
        this->size--;
    }

    void deleteAtIndex(int index)
    {
        if(index < 0 || index >= size)
        {
            cout<<"Invalid Index."<<endl;
            return;
        }

        if(index == 0)
        {
            deleteAtFront();
            return;
        }

        Node *ptr = this->head;

        for(int i = 0; i < index -1; i++)
        {
            ptr = ptr->next;
        }

        Node* temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
        size--;
    }

    void updateList(int index , int data)
    {
        if(index < 0 || index >= size) 
        {                     
            cout<<"Invalid index."<<endl;
            return;
        }

        Node* ptr = this->head;
        for (int i = 0; i < index; i++) 
        {
            ptr = ptr->next;
        }

        ptr->data = data;
    }

    void printList()
    {
        Node *ptr = this->head;

        cout<<"Linked list: ";

        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{

    Linked list;

    list.insertAtFront(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.printList();

    list.updateList(1, 15);    
    list.printList();

    list.insertAtIndex(1,100);
    list.printList();

    list.deleteAtFront();
    list.printList();

    list.deleteAtEnd();
    list.printList();

    list.deleteAtIndex(1);
    list.printList();

    return 0;
}