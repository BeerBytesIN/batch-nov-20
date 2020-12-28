// Link : https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int p=0,n = nums.size();
        
        // from end to start to find the first num which is not in decreasing 
        for (int i = n - 1; i >= 0; i--)
        {
            // the whole nums is increasing
            if(i == 0){
                p = -1;
                break;
            }
            
            // remember the poistion
            if(nums[i - 1] < nums[i])
            {
                p = i - 1;
                break;
            }
        }
        
        if(p==-1){
            sort(nums.begin(),nums.end());
            for(int x : nums){
                cout<< x <<" ";
            }
            return;
        }
        
        // find the first num bigger than the nums[p] using binary search
        // remember the position by l
        int l = p + 1,r = n - 1;
        while(l < r)
        {
            int mid = l + r + 1 >> 1;
            if(nums[mid] > nums[p]) l = mid;
            else r = mid - 1;
        }
        swap(nums[p],nums[l]);
        
        sort(nums.begin()+p+1, nums.end());
        
        
        for(int x : nums){
            cout<< x <<" ";
        }
    }
};
