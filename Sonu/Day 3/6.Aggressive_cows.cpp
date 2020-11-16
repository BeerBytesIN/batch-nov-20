// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
using namespace std;
 
int fun(vector<int> v, int d)
{
	int a=0, b=1;
	int cnt=0;
	int n=v.size();
	for(int i=1; i<n; i++)
	{
		if((v[i]-v[a])>=d)
		{
			cnt++;
			a=i;
		}
	}
	return cnt;
}
void solve()
{
	int n, nc; cin>>n>>nc;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(), v.end());
	int l=v[1]-v[0];
	int h=v[n-1]-v[0];
	int ans=-1;
	while(l<=h)
	{
		int m= l+(h-l)/2;
		if( fun(v, m)+1>=nc)
		{
			ans=m;
			l=m+1;
		}
		else
			h=m-1;
	}
	cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
} 
