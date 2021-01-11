/* optimized but not fully correct */
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
	ll start=0;
	ll end=0;
	ll flag=0;
	while(start<=end && end<n)
	{
		//cout<<start<<" "<<end<<"\n";
		if(end-start <k)
		{
			if(ar[end]<0 && flag==0)
			{
				flag=1;
				cout<<ar[end]<<" ";
				
			}
			
			end++;
		}
		else
		{
			
			if(flag==0)
			{
				cout<<"0 ";
			}
			start++;
			flag=0;
		}
	}
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
