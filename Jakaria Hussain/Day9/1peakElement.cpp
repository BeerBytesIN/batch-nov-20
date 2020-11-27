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
// Logn solution : 
/* 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo = 0; int hi = nums.size();
        int mid;
        
        while(lo<hi){
            mid = (lo+hi)/2;
            
            int prev, next;
            bool first = mid==0;
            bool last = mid==nums.size()-1;
            
            if(!first) prev = nums[mid-1];
            if(!last) next = nums[mid+1];
            
            if((first || nums[mid] > prev) && (last || nums[mid] > next)){
                return mid;
            }
            
            if(nums[mid] > prev){
                lo = mid+1;
            }else{
                hi=mid;
            }
        }
        
        
        return -1;
    }
}
*/
