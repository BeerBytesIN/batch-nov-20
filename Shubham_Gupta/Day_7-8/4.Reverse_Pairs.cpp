#include<bits/stdc++.h>
using namespace std;

// Leetcode 493
 int global=0;
    void merge(vector<int>&arr,vector<int>&nums1,vector<int>&nums2){
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j])
                arr.push_back(nums1[i++]);
            
            else arr.push_back(nums2[j++]);
        }
        
        while(j<nums2.size()) arr.push_back(nums2[j++]);
        while(i<nums1.size()) arr.push_back(nums1[i++]);
        
        return ;
    }
    void sort(vector<int> &nums,int start,int end,vector<int> &arr){
        
        if(start>end) return ;
        if(start==end){
            arr.push_back(nums[start]);
            return ;
        }
        int mid=(start+end)/2;
        
        vector<int> left;
        sort(nums,start,mid,left);
        vector<int> right;
        sort(nums,mid+1,end,right);
        
        // find inversion:
        int i=0,j=0;
        while(i<left.size() && j<right.size()){
            if(left[i]<= 2L * right[j]) i++;
            else {
                global+=left.size()-i;
                j++;
            }
        }
        
        merge(arr,left,right);
        return ;
    }
   
    int reversePairs(vector<int>& A) {
        vector<int> arr;
        sort(A,0,A.size()-1,arr);
        return global;
    }
int main(){
	vector<int> n={1,2,2,1};
	reversePairs(n);
	return 0;
}