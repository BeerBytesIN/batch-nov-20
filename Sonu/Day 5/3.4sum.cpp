// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector< vector<int> > v;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<=(n-4); i++){
            int z=target-nums[i];
            for(int j=i+1; j<=(n-3); j++){
                z-=nums[j];
                int l=j+1, h=n-1;
                while(l<h){
                    if(nums[l]+nums[h]==z){
                        v.push_back({nums[i], nums[j], nums[l], nums[h]});
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]>z)
                        h--;
                    else if(nums[l]+nums[h]>z)
                        l++;
                }
            }
        }
        return v;
        
    }
};
