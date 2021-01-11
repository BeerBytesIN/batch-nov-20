/* 4 sum (RDX TYPES)*/ 
/* A more optimized approach */
/* Jumping over the duplicate numbers to make the code more optimized and avoiding the duplicates in the answer*/
/* Whenever the values at the left and at the right add up to the remaining , we directly step to the next one */
/* take care of while crossing over the duplicates , thats how optimizing the code without the use of the hashset*/
/* Time complexity : O(n^3) */
/* Space Complexity : O(1) */
/* Jumping over the duplicates to prevent repeating */

#include<bits/stdc++.h>
using namespace std;
int main()
{
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
	
	sort(nums.begin(), nums.end());
	
	vector<vector<int>>ans;
	
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			int left = j+1;
			int right = n-1;
			int x = target - (nums[i] + nums[j]);
			
			while(left<right)
			{
				vector<int>quadraplet;
				if(nums[left]+nums[right]==x)
				{
					quadraplet.push_back(nums[i]);
					quadraplet.push_back(nums[j]);
					quadraplet.push_back(nums[left]);
					quadraplet.push_back(nums[right]);
					ans.push_back(quadraplet);
					//left++;
					//right--;
					
					// removing the duplicates of third number
					while(left< right && nums[left]==quadraplet[2])++left;
				
					// removing the duplicates of fourth number
					while(left<right && nums[right]==quadraplet[3])--right;
					
					left++;
					right--;
				
				}
				else if(nums[left] + nums[right] >x)
				{
					right--;
				}
				else{
					left++;
				}
			}
			// removing the duplicates of second number
			while(j+1<n && nums[j]==nums[j+1])j++;
			
		}
		while(i+1<n && nums[i]== nums[i+1])i++;
		
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
