//Minimum number of jumps

#include <iostream>
using namespace std;

int minJumps(int arr[], int n)
{
    int i;
    while (i < n)
    {
        int jump = arr[i];
        int nextElement = arr[jump];
        i = i + jump + arr[nextElement];
        if (i>n)
            return (arr[nextElement]);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"\nEnter the size of the array:\n";
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: "<<i+1;
        cin>>arr[i];
    }
    int result = minJumps(arr, n);
    return(result);
}


