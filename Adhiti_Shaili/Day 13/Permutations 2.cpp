#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int>& nums,vector<int>& v,unordered_map<int,int> hash)
    {
        if(v.size()==nums.size())
        {
            ans.push_back(v);
            return;
        }
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            if(i->second>0)
            {
                v.push_back(i->first);
                i->second--;
                rec(nums,v,hash);
                i->second++;
                v.pop_back();
            }
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        vector<int> v;
        rec(nums,v,hash);
        return ans;
        
    }
};