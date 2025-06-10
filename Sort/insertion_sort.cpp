#include<iostream>
using namespace std;

void insertion_sort(int [], int);
void printArray(int [], int);

int main()
{
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Array of arr["<<i<<"]: ";
        cin>>arr[i];
    }

    printArray(arr,n);

    insertion_sort(arr,n);

    printArray(arr,n);

    return 0;
}

void insertion_sort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
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