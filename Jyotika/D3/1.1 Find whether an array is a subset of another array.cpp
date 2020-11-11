
/* Finding if an array can be a subset of another array , using binary serach , time complxity : O(mlogm + nlogm) , space complexity : O(1) */
#include<bits/stdc++.h>
using namespace std;

bool binary_search(int val, int a1[] , int m)
{
	int low =0;
	int high = m-1;
	while(low<=high)
	{
		int mid = (low)+(high-low)/2;
		if(a1[mid]==val)
		{
			return true;
		}
		else if(a1[mid]<val)
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
    int tc;
    cin>>tc;
    while(tc--)
    {
	int n,m;
	cin>>m>>n;
	int a1[m], a2[n];
	for(int i=0;i<m;i++)cin>>a1[i];
	for(int i=0;i<n;i++)cin>>a2[i];
	
	sort(a1, a1+n);
	int flag=1;
	for(int i=0;i<n;i++)
	{
		int val = a2[i];
		if(binary_search(val, a1, m)==true)continue;
		else {
			flag=0;break;
		}
	}
	
	if(flag==0)cout<<"No\n";
	else cout<<"Yes\n";
    }
	
}