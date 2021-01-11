/* searching in a 2d matrix */
/* Time complexity : O(mlogn) where it is generalized as O(min(m,n)* log(max(m,n)))*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int ar[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	int target;
	cin>>target;
	int ans=0;
	for(int i=0;i<m;i++)
	{
		int low = 0;
		int high = n-1;
		while(low<=high)
		{
			int mid = low+ (high-low)/2;
			if(ar[i][mid]==target)
			{
				ans=1;break;
			}
			else if(ar[i][mid]<target)
			{
				low = mid+1;
			}
			else{
				high = mid-1;
			}
		}
	}
	
	if(ans)cout<<"YES\n";
	else cout<<"NO\n";
}