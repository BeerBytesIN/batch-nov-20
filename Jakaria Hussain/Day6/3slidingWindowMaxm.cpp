// Link : https://leetcode.com/problems/sliding-window-maximum/submissions/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        if(nums.size()==1) return nums;
        
        vector<int> ans;
        priority_queue<pair<int, int> > pq;
        
        for(int i=0;i<k;i++) pq.push(make_pair(nums[i], i));
        
        ans.push_back(pq.top().first);
        
        for(int i=k;i<nums.size();i++){
            pq.push(make_pair(nums[i], i));
            
            while(!pq.empty() && pq.top().second < i-k+1)
	            pq.pop();
            
            ans.push_back(pq.top().first);
            
        }
        return ans;
    }
};
