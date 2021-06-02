//Given an integer array nums and an integer k, return the kth largest element in the array.

#include <iostream>
#include <algorithm>
using namespace std;

void kthElement (int arr[], int len, int k)
{
    sort (arr, arr+len);
    cout<<"Kth smallest element is: \n"<<arr[k-1];
}


int main()
{
    int n;
    cout<<"Enter the number of arrays: \n";
    cin>>n;
    while (n)
    {
        int len;
        cout<<"Enter the length of the array: \n";
        cin>>len;
        int arr[10];
        cout<<"Enter the elements of the array: \n";
        for (int i=0; i<len; i++)
            cin>>arr[i];
        int k;
        cout<<"Enter the value of k: \n";
        cin>>k;
        kthElement (arr, len, k);
        n--;
    }
}

