/* finding the first occurence and the last occurence of an element */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
        
        vector<int>Ans;
        
        if(nums.size()==0){Ans.push_back(-1);Ans.push_back(-1);return Ans;}
       
        int low=0, high = nums.size()-1;
        int first=-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
                high = mid-1;
                first= mid;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        int second=-1;
        low=0, high = nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
                second= mid;
                low = mid+1;
            }
            else if(nums[mid]<target)
            {
                low= mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
     cout<<first<<" "<<second<<"\n";
    Ans.push_back(first);
    Ans.push_back(second);
    return Ans;  
    }
};