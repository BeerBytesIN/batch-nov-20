class Solution {
public:
    int util(vector<int> arr,int l,int r,int target){
        if(l>r) return -1;
        if(l==r && arr[l]==target) return l;
        if(l==r) return -1;
        int mid=r-(r-l)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<arr[l]){
            if(target<=arr[r] && target>=arr[mid])
                return util(arr,mid+1,r,target);
        return util(arr,l,mid-1,target);
            
        }
        if(target>=arr[l] && target <=arr[mid])
        return util(arr,l,mid-1,target);
        return util(arr,mid+1,r,target);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return util(nums,0,n-1,target);
    }
};