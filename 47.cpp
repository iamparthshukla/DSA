// Write a function that reverses a string. The input string is given as an array of characters s.
// There are three methods:
// 1. Use the swap function of #include <algorithm>
// 2. Make a temp character
// 3. Make a new string and store characters in it that way

#include <iostream>
#include <algorithm>
using namespace std;

void reverseString (string s) {
    int n = s.size();
    char temp;
    for(int i = 0; i < n/2; i++) {
        swap (s[i], s[n - i - 1]);

        //temp = s[i];
        //s[i] = s[n-i-1];
        //s[n-i-1] = temp;
    }
    cout<<"Reversed string is: "<<s;
}

int main()
{
    int n;
    cout<<"Enter the number of strings:\n";
    cin>>n;
    while (n)
    {
        string s;
        cout<<"Enter the string:\n";
        cin>>s;
        reverseString(s);
        n--;
    }
}



