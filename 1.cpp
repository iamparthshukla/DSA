//Write a program to reverse an array or string

#include <iostream>
#include <algorithm>
using namespace std;

void reverse (int arr[], int n)
{
    int temp;
    for (int i=0; i<n/2; i++)
    {
        //using temp
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

}

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int size;
        cout<<"Enter the size of the array: \n";
        cin>>size;
        int arr[size];
        cout<<"Enter the elements: \n";
        for (int i=0; i<size; i++)
            cin>>arr[i];
        reverse(arr, size);
        for (int i=0; i<size; i++)
            cout<<arr[i]<<" ";
    }
}