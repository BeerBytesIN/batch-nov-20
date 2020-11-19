// Link : https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        // sort(nums.begin(),nums.end());
        // int left = 0, right = nums.size()-1;
        // while(left<right){
        //     if(nums[left]+nums[right] == target){
        //         ans[0] = left;
        //         ans[1] = right;
        //         break;
        //     }
        //     if(nums[left]+nums[right] < target) left++;
        //     else right--;
        // }
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        return ans;

    }
};
