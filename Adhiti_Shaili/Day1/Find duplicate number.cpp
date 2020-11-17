#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                return abs(nums[i]);
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return -1;
        
    }

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int ans=findDuplicate(nums);
    cout<<ans<<endl;
    return 0;

}