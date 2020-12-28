#include <bits/stdc++.h>
using namespace std;

unsigned int reverse(unsigned int A) {
   
    vector<int> v(32,0);
    unsigned int ans=0;
    for(int i=0;i<32;i++)
    {
        int x=A&(1<<i);
        if(x)
        {
            v[i]=1;
        }
    }
    for(int i=0;i<16;i++)
    {
        swap(v[i],v[31-i]);
    }
    
    for(int i=0;i<32;i++)
    {
        ans+=v[i]<<i;
    }
    return ans;  
}
