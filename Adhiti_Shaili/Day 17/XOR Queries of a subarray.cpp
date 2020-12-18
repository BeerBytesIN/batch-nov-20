#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=arr[i]^arr[i-1];
        }
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]==0)
            {
                ans.push_back(arr[queries[i][1]]);
            }
            else
            {
                int x=arr[queries[i][1]];
                x=x^arr[queries[i][0]-1];
                ans.push_back(x);
            }
        }
        return ans;
        
        
    }
};