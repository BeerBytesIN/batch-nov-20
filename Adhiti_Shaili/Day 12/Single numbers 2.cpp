#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
                  
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            if(i->second==1)
            {
                return i->first;
            }
        }
        return 0;
        
    }
};