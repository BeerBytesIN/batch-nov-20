class Solution {
public:
    void util(int i,int n,int k,vector<vector<int>>& ans,vector<int>& out){
        if(i>n+1 || out.size()>k)
            return;
        if(out.size()==k){
            ans.push_back(out);
            return;
            }
        for(int j=i;j<=n;j++){
        out.push_back(j);
          util(j+1,n,k,ans,out);
            out.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> out;
        util(1,n,k,ans,out);
        return ans;
    }
};