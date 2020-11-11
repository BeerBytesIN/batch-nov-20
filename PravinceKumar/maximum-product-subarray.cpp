class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_overall=nums[0];
        int max_ending_here=nums[0];
        int min_ending_here=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int temp = max_ending_here;
            max_ending_here = max({nums[i] , nums[i]*max_ending_here , nums[i]*min_ending_here});
            min_ending_here = min({nums[i] , nums[i]*temp , nums[i]*min_ending_here});
            max_overall = max(max_overall,max_ending_here);
        }
        return max_overall;
    }
};
