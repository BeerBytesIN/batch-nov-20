#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,maxi=0,k=0,sum=0;
	    cin>>n;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(maxi<v[i])
	        {
	            maxi=v[i];
	            k=i;
	        }
	    }
	    int lmax=0,rmax=0;
	    for(int i=0;i<k;i++)
	    {
	        if(v[i]>lmax)
	        {
	            lmax=v[i];
	        }
	        else
	        {
	            sum+=(lmax-v[i]);
	        }
	    }
	    for(int i=n-1;i>k;i--)
	    {
	        if(v[i]>rmax)
	        {
	            rmax=v[i];
	        }
	        else
	        {
	            sum+=(rmax-v[i]);
	        }
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}