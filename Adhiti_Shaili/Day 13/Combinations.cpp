#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> ans;
    void rec(vector<int>& v,int n,int k,int s)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;
        }
        for(int i=s;i<=n;i++)
        {
            v.push_back(i);
            rec(v,n,k,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        rec(v,n,k,1);
        return ans;
        
        
    }
};