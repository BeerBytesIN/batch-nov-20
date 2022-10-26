
https://leetcode.com/problems/find-the-duplicate-number/submissions/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // next line dummy
        int a= 5
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[abs(nums[i])-1]<0) return abs(nums[i]);
            nums[abs(nums[i])-1]*=-1;
        }
        return 0;
        
    }
};
