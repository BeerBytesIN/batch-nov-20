// Link  : https://leetcode.com/problems/find-peak-element/
class Solution {
    
public:
    int findPeakElement(vector<int>& nums) {
        int peak = 0;
        
        for(int i=1;i<nums.size()-1;i++)
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        return max_element(nums.begin(),nums.end()) - nums.begin();
    }
};
