// Maximum and minimum of an array using minimum number of comparisons
// There are two ways to do this:
// 1. Brute force: Pick up each element, compare, if bigger than all, continue, if not, break
// 2. Sort and pick the first and last element

#include <iostream>
#include <algorithm>
using namespace std;

void compare(int arr[], int n)
{
    sort (arr, arr+n);
    cout<<"Smallest element: "<<arr[0]<<"\n";
    cout<<"Largest element: "<<arr[n-1];
}


int main()
{
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the array: \n";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int len = n;
    compare (arr, len);
}