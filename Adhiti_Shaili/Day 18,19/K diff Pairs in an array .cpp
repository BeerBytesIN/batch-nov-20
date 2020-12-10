#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> s;
        
        int i=0,j=1,count=0;
        int n=nums.size();
        while(i<=j&&j<n)
        {
            if(i==j)
            {
                j++;
            }
            else if(s.find({nums[i],nums[j]})!=s.end())
            {
                j++;
            }
            else if(abs(nums[i]-nums[j])>k)
            {
                i++;
            }
            else if(abs(nums[i]-nums[j])==k)
            {
                count++;           
                s.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return count;
        
    }
};