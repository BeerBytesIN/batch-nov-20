class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
     vector<int> um(arr.size(),0);
     um[0]=arr[0];
     for(int i=1;i<arr.size();i++)
         um[i]=um[i-1]^arr[i];
      vector<int> ans;
      for(int i=0;i<queries.size();i++){
          int l=queries[i][0];
          int r=queries[i][1];
          int val=um[r];
          if(l!=0)
            val^=um[l-1];
          ans.push_back(val);
      
      }
        return ans;
    }
};