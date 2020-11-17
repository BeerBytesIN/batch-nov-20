#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int* arr=new int[n];
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
    int x=n/k;
    for(auto it=hash.begin();it!=hash.end();it++)
    {
        if(it->second>x)
        {
            cout<<it->first<<" ";
        }
    }

    return 0;
}