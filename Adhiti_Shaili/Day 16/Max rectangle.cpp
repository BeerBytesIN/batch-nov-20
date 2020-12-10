#include <bits/stdc++.h>
using namespace std;
#define MAX 5


int Area(int arr[MAX][MAX],int S,int m)
{
    stack<int> s;
    long long area=0;
    for(int i=0;i<m;i++)
    {
        if(s.empty()||arr[S][i]>arr[S][s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty()&&arr[S][i]<=arr[S][s.top()])
            {
                long long x=arr[S][s.top()];
                s.pop();
                if(!s.empty())
                {
                    area=max(area,x*(i-s.top()-1));
                }
                else
                {
                    area=max(area,x*(i));
                }
                
            }
            s.push(i);
        }
    }
    
    while(!s.empty())
    {
        long long x=arr[S][s.top()];
        s.pop();
        if(!s.empty())
        {
            area=max(area,x*(m-s.top()-1));
        }
        else
        {
            area=max(area,x*(m));
        }
    }
    return area;
    
}


int maxArea(int M[MAX][MAX], int n, int m) {
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(M[j][i]==1)
            M[j][i]=M[j][i]+M[j-1][i];
        }
    }
    
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int ans=Area(M,i,m);
        maxi=max(maxi,ans);
    }
    return maxi;
}
