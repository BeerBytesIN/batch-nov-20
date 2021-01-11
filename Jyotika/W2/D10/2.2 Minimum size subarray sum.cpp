/* minimum window with sum>=s */

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        
        int n = nums.size();
        int low=0;
        int high = 0;
        int sum=0;
        int ans=INT_MAX;
        while(low<=high && high<n)
        {
            sum+=nums[high];
            while(sum>=s)
            {
                int len = high-low+1;
                ans = min(len, ans);
                cout<<low<<" "<<high<<"\n";
                sum-=nums[low];
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