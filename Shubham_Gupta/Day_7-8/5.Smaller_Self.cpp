#include<bits/stdc++.h>
using namespace std;

// Leetcode 315
vector<int> ans;
    vector<int> merge(vector<int>&nums,vector<int>&nums1,vector<int>&nums2){
        int i=0;
        int j=0;
        vector<int> arr;
        while(i<nums1.size() && j<nums2.size()){
            if(nums[nums1[i]]>nums[nums2[j]])
                arr.push_back(nums1[i++]);
            
            else arr.push_back(nums2[j++]);
        }
        
        while(j<nums2.size()) arr.push_back(nums2[j++]);
        while(i<nums1.size()) arr.push_back(nums1[i++]);
        
        return arr;
    }
    vector<int> sort(vector<int> &nums,int start,int end,vector<int>&idx){
        vector<int> arr;
        if(start>end) return arr;
        if(start==end){
            arr.push_back(idx[start]);
            return arr;
        }
        int mid=(start+end)/2;
        vector<int> left=sort(nums,start,mid,idx);
        vector<int> right=sort(nums,mid+1,end,idx);
        
        int i=0;
        int j=0;
        while(i<left.size() && j<right.size()){
            if(nums[left[i]]>nums[right[j]]) {
                ans[left[i]]+=right.size()-j;
                i++;
            }
            else j++;
        }
        
        arr=merge(nums,left,right);
        return arr;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> idx(n,0);
        for(int i=0;i<n;i++) idx[i]=i;
        ans.resize(n,0);
        sort(nums,0,n-1,idx);
        return ans;
    }
int main(){
	vector<int> n={1,2,2,1};
	reversePairs(n);
	return 0;
}