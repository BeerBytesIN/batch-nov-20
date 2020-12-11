#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int>& nums,vector<int>& v,int k,int s)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;           
        }
        
        for(int i=s;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            rec(nums,v,k,i+1);
            v.pop_back();
            
            while(i<nums.size()-1&&nums[i]==nums[i+1])
            {
                i++;
            }
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n;i++)
        {
           vector<int> v;
           rec(nums,v,i,0);
        }
        return ans;
        
    }
};