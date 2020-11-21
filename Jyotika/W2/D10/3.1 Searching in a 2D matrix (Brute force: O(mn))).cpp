/* searching in a 2d matrix */
/* Brute force : time complexity : O(m*n) */
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
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]==target)
			{
				ans=1;
			}
		}
	}
	if(ans)cout<<"YES\n";
	else cout<<"NO\n";
}