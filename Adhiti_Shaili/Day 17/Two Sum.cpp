#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> hash;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(hash[target-nums[i]])
            {
                ans.push_back(hash[target-nums[i]]-1);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]]=i+1;
        }
        return ans;
    }
};