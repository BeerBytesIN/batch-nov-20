#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            swap(s[i],s[n-i-1]);
        }
        
    }

int main()
{
    int n;
    cin>>n;
    vector<char> s;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        s.push_back(x);
    }

    reverseString(s);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;

}