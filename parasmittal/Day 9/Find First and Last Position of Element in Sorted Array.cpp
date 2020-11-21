class Solution {
public:
    int bs_last(vector<int> arr,int target,int l,int r){
        if(l>r){
            return -1;
        }
        int mid=(l+r)/2;
        if(arr[mid]==target){
            if(mid==r || arr[mid+1]>arr[mid])
                return mid;
            return bs_last(arr,target,mid+1,r);
        }
        if(arr[mid]>target){
          return  bs_last(arr,target,l,mid-1);
        }
        return bs_last(arr,target,mid+1,r);
    }
    int bs_first(vector<int> arr,int target,int l,int r){
        if(l>r){
            return -1;
        }
        int mid=(l+r)/2;
        if(arr[mid]==target){
            if(mid==0 || arr[mid-1]<arr[mid])
                return mid;
            return bs_first(arr,target,l,mid-1);
        }
        if(arr[mid]>target){
          return  bs_first(arr,target,l,mid-1);
        }
        return bs_first(arr,target,mid+1,r);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return {-1,-1};
        }
        int firstOccurance=bs_first(nums,target,0,n-1);
        if(firstOccurance==-1){
            return {-1,-1};
        }
        int lastOccurance=bs_last(nums,target,0,n-1);
        return {firstOccurance,lastOccurance};
    }
};