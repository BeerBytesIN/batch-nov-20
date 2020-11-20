/* minimum window with sum>=s */
/* second variation of sliding window technique , where the size of the sliding window will vary , but we always have to consider the given condition */
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        
        int n = nums.size();
        int low=0;
        int high = 0;
        int sum=0;
        int ans=INT_MAX;
        while(high<n)
        {
            sum+=nums[high];
            while(sum>=s)
            {
                ans= min(ans, high-low+1);
                sum-= nums[low];
                low++;
            }
            high++;
            
        }
        if(ans!=INT_MAX)
            return ans;
        else 
            return 0;
        
        
        
    }
};