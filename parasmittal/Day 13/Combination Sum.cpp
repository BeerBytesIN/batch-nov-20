class Solution {
public:
    void util(vector<vector<int>> &ans, vector<int>& out,vector<int> arr,int sum,int j){
        if(sum==0){
            ans.push_back(out);
            return;
        }
        if(j==arr.size()|| sum<0)
            return;
//   for(int j=i;j<arr.size();j++)
 //      {
       out.push_back(arr[j]);
    util(ans,out,arr,sum-arr[j],j);
       out.pop_back();
    util(ans,out,arr,sum,j+1);
    
//   }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int sum) {
      sort(arr.begin(),arr.end());
      vector<vector<int>> ans;
        vector<int> out;
      util(ans,out,arr,sum,0);
        return ans;
    }
};