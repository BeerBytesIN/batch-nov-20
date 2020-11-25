#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(v[i]>=0&&v[j]<0)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]<0)
        {
            i++;
        }
        if(v[j]>=0)
        {
            j--;
        }
    }
    
    for(int k=0;k<n;k++)
    {
        cout<<v[k]<<" ";
    }
    cout<<endl;
    return 0;
}