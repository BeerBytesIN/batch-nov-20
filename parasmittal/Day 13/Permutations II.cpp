class Solution {
public:
    void util( set<vector<int>>& ans,vector<int>& out,vector<int> nums,vector<bool>& visited){
        if(out.size()==nums.size()){
            ans.insert(out);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!visited[i]){
            visited[i]=true;
            out.push_back(nums[i]);
            util(ans,out,nums,visited);
            out.pop_back();
                visited[i]=false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> out;
        vector<bool> visited(nums.size(),false);
        util(ans,out,nums,visited);
        vector<vector<int>> finalout;
        for(auto x:ans)
            finalout.push_back(x);
        return finalout;
    }
};