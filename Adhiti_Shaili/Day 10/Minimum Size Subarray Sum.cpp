#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int mini=INT_MAX,sum=0;
        int n=nums.size();
        int i=0,j=0;
        while(i<=j&&j<n)
        {
            if(sum>=s)
            {
                mini=min(mini,j-i);
                sum-=nums[i];
                i++;
            }
            else
            {
                sum+=nums[j];
                j++;
            }
        }
        while(i<n)
        {
            if(sum>=s)
            {
                mini=min(mini,j-i);
            }
            sum-=nums[i];
            i++;
        }
        if(mini==INT_MAX)
        {
            return 0;
        }
        else
        {
            return mini;
        }
        
    }
};