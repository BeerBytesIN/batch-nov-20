#include<bits./stdc++.h>
using namespace std;
// leetcode 34
int find(vector<int>&nums,int target,bool upper){
        int start=0;
        int end=nums.size()-1;
        int idx=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                idx=mid;
                if(upper) start=mid+1;
                else end=mid-1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        if(n==0) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        ans.push_back(find(nums,target,false));
        ans.push_back(find(nums,target,true));
        return ans;
    }

 int main(){
 	vector<int> ar={1,2,3,4,5,5,5,5,6,7};
 	searchRange(ar,5);
 	return 0;
 }