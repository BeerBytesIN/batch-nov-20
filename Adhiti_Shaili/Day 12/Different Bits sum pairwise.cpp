#include<bits/stdc++.h>
using namespace std;

int cntBits(vector<int> &A) {
    int n=A.size();
    long long int ans=0,mod=pow(10,9)+7;
    for(int i=0;i<31;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]&(1<<i))
            {
                count++;
            }
        }
        ans=((ans%mod)+(2*(count%mod)*((n-count)%mod))%mod)%mod;
    }
    return ans;
}