#include<bits/stdc++.h>
using namespace std;

// Approach 1: using hashmap O(m+n) time and O(m) space
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        for(int ele: nums1)
        {
            if(map.count(ele)>0) map[ele]++;
            else map[ele]=1;
        }
        
        vector<int>ans;
        for(int ele:nums2)
        {
            if(map.count(ele)>0 && map[ele]>0) {
                map[ele]--;
                ans.push_back(ele);
            }
        }
        return ans;
    }

 //=======================================================================
    // Approach 2: sort O(mlogm + nlogn + m+n) T.C. and O(1) space
     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        vector<int> ans;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }

int main(){
	vector<int> n={1,2,2,1};
	vector<int> m={2,2};
	intersect(n,m);
	return 0;
}