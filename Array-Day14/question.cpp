#include<iostream>
using namespace std;

int main(){

    int arr[20];
    int n,choice,index,element;

    cout<<"Enter the number of element in the array: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    do
    {
        cout<<endl<<"-----------------"<<endl;
        cout<<"Enter 1 for insert element: "<<endl;
        cout<<"Enter 2 for delete element: "<<endl;
        cout<<"Enter 3 for update element: "<<endl;
        cout<<"Enter 4 for view all element: "<<endl;
        cout<<"Enter 0 for exit: "<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter n: ";
                cin>>n;

                for(int i = 0; i < n; i++)
                {
                    cout<<"Enter element of a["<<i<<"]:";
                    cin>>arr[i];
                }
            break;
            case 2:
                cout<<"Enter index of element to delete: ";
                cin>>index;
                for(int i = index; i <= n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            break;
            case 3:
                cout<<"Enter index of element to update: ";
                cin>>index;
                cout<<"Enter new element: ";
                cin>>element;
                arr[index] = element;
            break;
            case 4:
                for(int i = 0; i < n; i++)
                {
                    cout<<"Element a["<<i<<"]: "<<arr[i]<<endl;
                }
            break;
            case 0:
            break;
            default: 
                cout<<"wrong input.";
            break;
        }
    } while (choice != 0);
    
    return 0;
}