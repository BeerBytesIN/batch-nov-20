#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& tree) {
    
        unordered_map<int,int> hash;
        int start=0,mxc=0;
        
        for(int i=0;i<tree.size();i++)
        {
            hash[tree[i]]++;
            while(hash.size()>2)
            {
                hash[tree[start]]--;
                if(hash[tree[start]]==0)
                {
                    hash.erase(tree[start]);
                }
                start++;
            }
            mxc=max(mxc,i-start+1);
        }
        return mxc;
        
        
    }
};