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

class Linkedlist
{
    public:
        Node *head;
        int size;
        
    Linkedlist()
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

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->size++;
    }

    void insertAtIndex(int data, int index)
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

    void updateList(int index, int data)
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

    void printList(){
        Node *ptr = head;

        cout<<"Linked List: ";
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
    Linkedlist linked;
    int choice,element,index;
    do{

        cout<<endl<<"-----------------"<<endl;
        cout<<"Enter 1 for insert at front"<<endl;
        cout<<"Enter 2 for insert at end"<<endl;
        cout<<"Enter 3 for insert at index"<<endl;
        cout<<"Enter 4 for delete at front"<<endl;
        cout<<"Enter 5 for delete at end"<<endl;
        cout<<"Enter 6 for delete at index"<<endl;
        cout<<"Enter 7 for update list"<<endl;
        cout<<"Enter 8 for view list"<<endl;
        cout<<"Enter 0 for exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter element to insert at front: ";
                cin>>element;
                linked.insertAtFront(element);
            break;

            case 2:
                cout<<"Enter element to insert at end: ";
                cin>>element;
                linked.insertAtEnd(element);
            break;

            case 3:
                cout<<"Enter element: ";
                cin>>element;
                cout<<"Enter index: ";
                cin>>index;
                linked.insertAtIndex(element,index);
            break;

            case 4:
                linked.deleteAtFront();
            break;

            case 5:
                linked.deleteAtEnd();
            break;

            case 6:
                cout<<"Enter index: ";
                cin>>index;
                linked.deleteAtIndex(index);
            break;

            case 7:
                cout<<"Enter index: ";
                cin>>index;
                cout<<"Enter element: ";
                cin>>element;
                linked.updateList(index,element);
            break;

            case 8:
                linked.printList();
            break;

            case 0:
                cout<<"Exiting."<<endl;
            break;

            default:
                cout<<"Wrong Choice."<<endl;
            break;
        }

    }while (choice != 0);

    

    return 0;
}