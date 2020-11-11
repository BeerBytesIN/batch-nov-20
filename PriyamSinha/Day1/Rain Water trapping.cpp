#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
typedef pair<int,pi> ppi;
#define inp(arr,n) for(int il=0;il<n;il++)	cin>>arr[il]
#define outp(arr,n)for(int il=0;il<n;il++)	cout<<arr[il]<<" "
#define ll long long int 
#define ss second
#define ff first

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    ll arr[n];
	    inp(arr,n);
	    
	    ll left[n],right[n];
	    
	    left[0]=arr[0];
	    for(ll i=1;i<n;i++)
	        left[i]=max(arr[i],left[i-1]);
	       
	    right[n-1]=arr[n-1];
	    for(ll i=n-2;i>=0;i--)
	        right[i]=max(arr[i],right[i+1]);
	        
	    ll res=0;
	    for(ll i=0;i<n;i++)
	        res+=min(left[i],right[i])-arr[i];
	        
	    cout<<res<<"\n";
	}
    
	return 0;
}