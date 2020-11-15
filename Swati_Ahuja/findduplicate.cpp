#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& A) {
        map<int,int>m;
       int n=A.size()-1;
        int s=sqrt(n);
//int num=n/s+1;
        int f=n/s;

       for(auto i:A){
            m[(i-1)/s]++;
           if(m[(i-1)/s]>s)f=(i-1)/s;
            }
        m.clear();
        for(auto i:A)
            if(((i-1)/s)==f)m[i]++;
        int ans=0;
        for(auto i:m)
            if(i.second>1)ans=i.first;
        return ans;
    
    }
       
    
};