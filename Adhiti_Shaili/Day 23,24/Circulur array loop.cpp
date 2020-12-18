#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool Valid(vector<int>& nums,vector<bool>& visited,int prev)
    {
        int count=0,i=0,len=0,n=nums.size();
        while(visited[prev])
        {
            visited[prev]=false;
            i=nums[prev];
            prev=(i+n+prev+1000*n)%n;
            if((count>0&&i<0)||(count<0&&i>0))
            {
                return false;
            }
            count+=i;   
            len++;
        }
        
        if(len>1&&len<=n&&count>0)
        {
            return true;
        }
        else if(len>1&&len<=n&&count<0)
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }
    
    bool circularArrayLoop(vector<int>& nums) {
        
        if(nums.size()<=0)
        {
            return false;
        }
        vector<bool> visited(nums.size(),false);
        int n=nums.size();
        int i=0,prev=0,count=0;
        while(count<n)
        {
            if(visited[prev])
            {
                bool ans=Valid(nums,visited,prev);
                if(!ans)
                {
                    prev=++count;
                    fill(visited.begin(),visited.end(),false);
                    continue;
                }
                else
                {
                    return ans;
                }
                
            }        
            visited[prev]=true;
            i=nums[prev];
            prev=(i+n+prev+1000*n)%n;
        }
        return false;
    }
};