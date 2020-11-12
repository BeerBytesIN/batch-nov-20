/* Finding if there exists a subarray with given sum , concept : if sum = k , and subarray x exists and then subarray x+k should also exist */
/* Time complexity : O(n) , Space Complexity : O(n) */ 
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    set<int>s;
	    int flag=0;
	    for(int i=1;i<n;i++)
	    {
	        ar[i] += ar[i-1];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==0 || s.find(ar[i])!=s.end())
	        {
	            flag=1;break;
	        }
	        s.insert(ar[i]);
	    }
	    if(flag==1)cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}