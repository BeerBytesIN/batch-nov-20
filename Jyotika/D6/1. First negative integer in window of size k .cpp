/* finding the first negative integer in the window of size k */
// fuck ratings, i am in love with learning process

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

void solve()
{
    ll n;
    cin>>n;
    ll k;
    
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>k;
    for(ll i=0;i<n-k+1;i++)
    {
        ll flag=0;
        for(ll j=i;j<i+k;j++)
        {
            if(ar[j]<0)
            {
                cout<<ar[j]<<" ";flag=1;break;
            }
        }
         if(flag==0)cout<<"0 ";
    }
	
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

	fastio;
	solve();
} 