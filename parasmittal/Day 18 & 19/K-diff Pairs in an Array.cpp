class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        int n=nums.size();
        for(int i=0;i<n;i++)
        um[nums[i]]++;
        if(k==0){
            int count=0;
            for(auto x: um)
                if(x.second>1)
                count+=1;
            return count;
        }
        set<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(um.find((nums[i]-k))!=um.end()){
                int val=(nums[i]-k);
                if(val>nums[i])
                    swap(val,nums[i]);
                ans.insert({val,nums[i]});
            }
        }
        return ans.size();
        }
};