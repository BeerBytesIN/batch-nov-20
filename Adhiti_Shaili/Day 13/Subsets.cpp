#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int>& nums,int k,vector<int>& v,int s)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;
        }
       
        for(int i=s;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            rec(nums,k,v,i+1);
            v.pop_back();
        }
            
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            vector<int> v;
            rec(nums,i,v,0);
        }
        return ans;
    }
};