#include <iostream>
using namespace std;

// reverse an array

void reverse (int arr[],int n)
{
    int temp, i;
    for (i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
        i++;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of arrays you want :"<<"\n";
    cin>>n;
    while (n)
    {
        int size;
        cout<<"Enter the length of the array: "<<"\n";
        cin>>size;
        int arr[10];
        int i;
        cout<<"Enter the array:\n";
        for (i=0;i<size;i++)
            cin>>arr[i];
        reverse(arr,size);
        cout<<"The reverse array is:\n";
        for (i=0;i<size;i++)
            cout<<arr[i];
        n--;
    }
}

// There are generally two methods:
// 1. Make a new array and store elements using a reverse loop
// 2. Make a temp elements, and reverse the elements using that
