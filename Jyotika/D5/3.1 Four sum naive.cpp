/* 4 sum (RDX TYPES)*/
/* brute force technique : O(n^4)*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_With_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	fastio;
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		nums.push_back(a);
	}
	int target;
	cin>>target;
	map<vector<int>, int>mp;  // for storing the unique vectors
	for(int i=0;i<n;i++)
	{
		vector<int>quadraplet;
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				for(int m=k+1;m<n;m++)
				{
					int x = nums[i] + nums[j] + nums[k] + nums[m];
					if(x==target)
					{
						quadraplet.push_back(nums[i]);
						quadraplet.push_back(nums[j]);
						quadraplet.push_back(nums[k]);
						quadraplet.push_back(nums[m]);
					}
				}
			}
		}
		mp[quadraplet]++;
	}
	vector<vector<int>>ans;
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