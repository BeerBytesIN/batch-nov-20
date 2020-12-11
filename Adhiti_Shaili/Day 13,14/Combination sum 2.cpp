#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    
    void rec(vector<int>& candidates,vector<int>& v,int target,int sum,int s)
    {
        if(sum>target)
        {
            return;
        }
        else if(sum==target)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=s;i<candidates.size();i++)
        {
            v.push_back(candidates[i]);
            rec(candidates,v,target,sum+candidates[i],i+1);
            v.pop_back();
            
            while(i<candidates.size()-1&&candidates[i]==candidates[i+1])
            {
                i++;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        vector<int> v;
        rec(candidates,v,target,0,0);
        return ans;
        
    }
};