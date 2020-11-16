/* 4 sum (RDX TYPES)*/
/* Next approach : O((n^3)logn + nlogn)   -----> O((n^3)logn)    */
/* 3 pointer + binary search */

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int>nums;
bool binary_search(int low, int high , int element)
{
	
	while(low<=high)
	{
		int mid = low+ (high-low)/2;
		if(nums[mid]==element)
		{
			return true;
		}
		else if(nums[mid]<element)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	return false;
}


int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		nums.push_back(a);
	}
	int target;
	cin>>target;
	vector<vector<int>>ans;
	/* sorting here will take nlogn */
	sort(nums.begin(), nums.end());
	map<vector<int>, int>mp;
	for(int i=0;i<n;i++)
	{
		vector<int>quadraplet;
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				int start = k+1;
				int endd = n;
				int x = target - (nums[i] + nums[j] + nums[k] );
				
				if(binary_search(start, endd, x)){
				     	quadraplet.push_back(nums[i]);
						quadraplet.push_back(nums[j]);
						quadraplet.push_back(nums[k]);
						quadraplet.push_back(x);
				}
				
			}
		}
		mp[quadraplet]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		vector<int>ptr = it->first;
		ans.push_back(ptr);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
}