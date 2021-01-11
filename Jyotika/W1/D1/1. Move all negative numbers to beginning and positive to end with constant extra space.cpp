/*Move all negative numbers to beginning and positive to end with constant extra space*/


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
	for(ll i=0;i<n;i++){
		cin>>ar[i];
		
	}
	
	ll left=0,right=n-1;
	while(left<=right){
		if(ar[left]<0 && ar[right]<0) left++;
		else if(ar[left]>0 && ar[right]<0)swap(ar[left], ar[right]), left++, right--;
		else if(ar[left]>0 && ar[right]>0)right--; 
	    else left++, right--;
	    
	}
	for(ll i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
}


int main()
{

   

	fastio;
	ll tc=1;
	while(tc--)
	{
		
	solve();
	}
} 
