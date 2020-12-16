#include<bits./stdc++.h>
using namespace std;
 int findPeakElement_1(vector<int>& nums) {
        int n=nums.size();
        if(n==1 ) return 0;
        int peak=-1;
        for(int i=0;i<n;i++)
        {
            if(i==0 && nums[i]>nums[i+1])
                peak=0;
            
           else if(i==n-1 && nums[i]>nums[i-1])
                peak=i;
            
            else if( i>0 && i<n-1 &&nums[i]>nums[i-1] && nums[i]>nums[i+1])
                peak=i;
        }
        return peak;
    }

   int findPeakElement_2(vector<int>& nums) {
       int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(mid+1<nums.size() && nums[mid]<nums[mid+1]) low= mid+1;
            else high=mid;
        }
        return low;
    }
   int main(){
   vector<int> ar={1,2,1,1,3,4,5,6};
   cout<<findPeakElement_1(ar);
   	return 0;
   }