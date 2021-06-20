// Minimum and Maximum of an array
// Method (1) Linear Search
// Method (2) Tournament method : Divide and Conquer
// Method (3) Compare in pairs ----> MOST

#include "iostream"
using namespace std;

void minmax (int arr[], int size)
{
    int min, max, i;
    if (size%2==0)
    {
        if (arr[0] == arr[1])
        {
            min = arr[0];
            max = arr[1];
        }
        if (arr[0] < arr[1])
        {
            min = arr[0];
            max = arr[1];
        }
        if (arr[0] > arr[1])
        {
            min = arr[1];
            max = arr[0];
        }
        i = 2;
    }

    if (size%2!=0)
    {
        min = arr[0];
        max = arr[0];
        i = 1;
    }

    while (i<size-1)    //since i is starting from 0, runs one ahead the size
    {
        if (arr[i]>arr[i+1])
        {
            if (arr[i]>max)
                max = arr[i];
            if (arr[i+1]<min)
                min = arr[i+1];
        }

        if (arr[i]<arr[i+1])
        {
            if (arr[i+1]>max)
                max = arr[i+1];
            if (arr[i]<min)
                min = arr[i];
        }
        if (arr[i]==arr[i+1])
        {
            if (arr[i]>max)
                max = arr[i];
            if (arr[i]<min)
                min = arr[i];
        }
        i = i+2;
    }

    cout<<"Max element is: "<<max<<"\n";
    cout<<"Min element is: "<<min<<"\n";
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int size;
        cout<<"Enter the size of the array: \n";
        cin>>size;
        int arr[size];
        cout<<"Enter the elements of the array: \n";
        for (int i=0; i<size; i++)
            cin>>arr[i];
        minmax(arr, size);
    }
}