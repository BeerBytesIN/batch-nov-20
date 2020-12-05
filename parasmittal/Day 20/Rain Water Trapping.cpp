class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int left_max=0,right_max=0;
        int left=0;
        int right=n-1;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=left_max)
                    left_max=height[left];
                else
                    ans+=(left_max-height[left]);
                left++;
            }
            else{
                if(height[right]>=right_max)
                    right_max=height[right];
                else
                    ans+=(right_max-height[right]);
                right--;
            }
        }
        return ans;
    }
};