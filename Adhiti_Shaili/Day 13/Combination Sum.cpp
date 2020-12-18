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
            rec(candidates,v,target,sum+candidates[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        rec(candidates,v,target,0,0);
        return ans;
        
    }
};
