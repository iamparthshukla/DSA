//Reverse String

#include "iostream"
using namespace std;

void reverse(string str)
{
    int j = str.length();
    j = j-1;
    int i= 0 ;
    while (i < j)
        swap (str[i++], str[j--]);
    cout<<str;
}

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string str;
        cout<<"Enter the string:\n";
        cin>>str;
        reverse(str);

    }
}


