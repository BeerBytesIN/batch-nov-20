
        
class Solution {
public:
    void util(vector<int>& arr,vector<int>& subset,int i,int n,int sum,set<vector<int>>& ans){
        
        
        if(sum==0)
            {
            ans.insert(subset);
            return;
        }
        if(sum<0 || i==arr.size())
            return;
       subset.push_back(arr[i]);
util(arr,subset,i+1,n,sum-arr[i],ans);
        subset.pop_back();
        util(arr,subset,i+1,n,sum,ans);
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int sum) {
        sort(arr.begin(),arr.end());
       vector<int> subset;
       set<vector<int>> ans;
       util(arr,subset,0,arr.size(),sum,ans);
        vector<vector<int>> out;
        for(auto i: ans){
          out.push_back(i);  
        }
        return out;
    }
};