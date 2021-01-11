/* optimized but getting a wrong answer*/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int start=0, end=0;
        int n = nums.size();
        int maxi = INT_MIN;
        vector<int>ans;
       nums.push_back(INT_MIN);
        while(start<=end && end<=n)
        {
            if(end-start<k)
            {
                maxi = max(maxi, nums[end]);
                end++;
            }
            else
            {
                ans.push_back(maxi);
               
                start++;
                maxi = INT_MIN;
            }
        }
        
        return ans;
    }
};