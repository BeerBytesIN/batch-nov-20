#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int* arr=new int[n+1];
	    int* dp=new int[n+1];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<=n;i++)
	    {
	        dp[i]=INT_MAX;
	    }
	    dp[0]=0;
	    dp[1]=0;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=arr[i];j++)
	        {
	            if(dp[i]==INT_MAX)
	            {
	                break;
	            }
	            if(i+j<=n)
	            {
	                dp[i+j]=min(dp[i+j],1+dp[i]);
	            }
	        }
	    }
	    if(dp[n]==INT_MAX)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    cout<<dp[n]<<endl;
	}
	return 0;
}