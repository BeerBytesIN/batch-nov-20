class Solution {
public:
    int bs(vector<int> arr,int l,int r){
        if(l>r) return -1;
        int mid=(l+r)/2;
        if((mid==0 || arr[mid-1]<arr[mid])&& (mid==r || arr[mid]>arr[mid+1])){
            return mid;
        }
            if(mid>0 && arr[mid-1]>arr[mid]){
            return bs(arr,l,mid-1);
        }
        return bs(arr,mid+1,r);
    }
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
            return 0;
        return bs(nums,0,nums.size()-1);
    }
};