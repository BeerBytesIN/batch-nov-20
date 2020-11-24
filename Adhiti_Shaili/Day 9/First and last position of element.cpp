#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()==1&&target==nums[0])
        {
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        else if(nums.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int low=0;
        int high=nums.size()-1;
        int s=-1,e=-1;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target)
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        if(nums[low]==target)
        {
            s=low;
            e=low;
            for(int i=low+1;i<nums.size();i++)
            {
                if(nums[i]==nums[i-1])
                {
                    e=i;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            s=-1;
            e=-1;
        }
        
        ans.push_back(s);
        ans.push_back(e);
        return ans;
        
    }
};