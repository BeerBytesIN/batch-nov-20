class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> um;
        vector<int> o;
        int n=nums.size();
        for(int i=0;i<n;i++)
            um[nums[i]]=i;
        for(int i=0;i<n;i++){
            int x=target-nums[i];
            if(um.find(x)!=um.end() && i!=um[x]){
                o.push_back(i);
                o.push_back(um[x]);
                return o;
        }
    }
        return o;
        }
};