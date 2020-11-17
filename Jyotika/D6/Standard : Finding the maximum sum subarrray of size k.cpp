
// fuck ratings, i am in love with learning process

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 100000
#define bit __builtin_popcount

void solve()
{
	ll n;
	cin>>n;
	ll ar[n];
	for(ll i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll k;
	cin>>k;
	if(n<k)
    return ;
	ll sum=0, maxi= INT_MIN;
	ll start=0, end=0;
	while(end < n && start<=end)
	{
		if(end-start <k)
		{
			sum+=ar[end];
			end++;
		}
		else
		{
			maxi = max(maxi, sum);
		//	cout<<sum<<" "<<maxi<<"\n";
			sum-=ar[start];
			start++;
		}
	}
	cout<<maxi<<"\n";
}


int main()
{

	fastio;
	ll tc;
	cin>>tc;
	while(tc--)
	{
	solve();
	}
} 