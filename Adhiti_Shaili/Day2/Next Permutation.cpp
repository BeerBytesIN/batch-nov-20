#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums)
{
        int n=nums.size();      
        int index1=0,index2=n-1,maxi=INT_MAX;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                index1=i;
            }
        }
        for(int i=index1+1;i<n;i++)
        {
            if(nums[i]>nums[index1]&&nums[i]<=maxi)
            {
                maxi=nums[i];
                index2=i;
            }
        }
        if(maxi==INT_MAX)
        {
            sort(nums.begin(),nums.end());
        }
        else
        {
            swap(nums[index1],nums[index2]);
            int k=n-1,w=index1+1;
            while(w<k)
            {
                swap(nums[w++],nums[k--]);
            }
        }
        
        return;
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
    nextPermutation(nums);
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}