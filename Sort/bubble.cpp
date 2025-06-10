#include<iostream>
using namespace std;

void bubble_sort(int [], int);
void printArray(int [], int);

int main()
{
    int n;

    cout<<"Enter size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Array of a["<<i<<"]: ";
        cin>>arr[i];
    }

    printArray(arr,n);

    bubble_sort(arr,n);
    printArray(arr,n);

    return 0;
}

void printArray(int arr[], int n)
{
    cout<<"Array is: ";

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int arr[], int n)
{
    int pass = 1, temp;

    while(pass < n)
    {
        for(int i = 0; i < n - pass; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
}