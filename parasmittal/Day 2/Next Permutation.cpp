class Solution {
public:
    int findvalue(vector<int> nums){
        int n=nums.size();
        int i=n-2;
        for(;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;
        }
        return i;
    }
    void nextPermutation(vector<int>& nums) {
        int pos=findvalue(nums);
        int n=nums.size();
        cout<<pos;
        if(pos!=-1){
          int j=n-1;
        while(j>=0 && nums[j]<=nums[pos])
            j--;
            swap(nums[pos],nums[j]);
        }
       reverse(nums.begin()+pos+1,nums.end());
    }
};