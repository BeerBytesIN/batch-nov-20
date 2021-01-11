/* finding the peak element of an array in O(log n), applying binary search on answer */

#include<bits/stdc++.h>
using namespace std;
int findpeak(vector<int>nums)
{
	int low=0;
	int high = nums.size()-1;
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		if(mid>0 && (mid<nums.size()-1))
		{
			if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
			{
				return mid;
			}
			else if(nums[mid-1]>nums[mid])
			{
				high = mid-1;
			}
			else{
				low = mid+1;
			}
		}
		else if(mid==0){
			if(nums[0]>nums[1])
			{
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(mid==nums.size()-1)
		{
			if(nums[nums.size()-1]>nums[nums.size()-2])
			{
				return nums.size()-1;
			}
			else{
				return nums.size()-2;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int ans = findpeak(v);
	cout<<ans<<"\n";
}