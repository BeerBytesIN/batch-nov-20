#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    cin>>k;
	    int j=0;
	    while(v[j]>=0&&j<n-1)
	    {
	        j++;
	    }
	    for(int i=0;i<n-k+1;i++)
	    {
	        if(i>j)
	        {
	            j++;
	            while(v[j]>=0&&j<n-1)
    	        {
    	            j++;
    	        }
	        }
	        
	        if(j>=i&&(j<i+k)&&v[j]<0)
	        { 
     	        cout<<v[j]<<" ";
    	    }
    	    else
	        {
	            cout<<0<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}