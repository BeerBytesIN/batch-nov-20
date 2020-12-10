#include <bits/stdc++.h>
using namespace std;


int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}

#include<unordered_map>
#include<bits/stdc++.h>

int maxLen(int A[], int n)
{
    if(n==0)
    {
        return 0;
    }
    unordered_map<int,int> hash;
    hash[0]=0;
    hash[A[0]]=1;
    int maxi=0;
    for(int i=1;i<n;i++)
    {
        A[i]=A[i]+A[i-1];
        if(hash.find(A[i])!=hash.end())
        {
            maxi=max(maxi,i-hash[A[i]]+1);
        }
        else
        {
            hash[A[i]]=i+1;
            
        }
    }
    return maxi;
}
