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
    ll t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m>>n;
    	ll a[m][n];
    	
    	
    	for(ll i=0;i<m;i++)
    	    for(ll j=0;j<n;j++) 
    	        cin>>a[i][j];
        ll i=0,j=0,k=0,l=0;
        
        
        while (k < m && l < n) 
        {
            for (i = l; i < n; ++i) 
                cout << a[k][i] << " ";
            k++;
            
            for (i = k; i < m; ++i) 
                cout << a[i][n - 1] << " ";
            n--;
            
            if (k < m) 
            {
                for (i = n - 1; i >= l; --i) 
                    cout << a[m - 1][i] << " ";
                m--;
            }
            if (l < n) 
            {
                for (i = m - 1; i >= k; --i) 
                    cout << a[i][l] << " ";
                l++;
            }
        }
    
        cout<<"\n";
    }    
	return 0;
}