/* using hash table  : time complexity O(n+m), space complexity : O(m)*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a1[m];
	    int a2[n];
	    int flag=1;
	    map<int, int>mp;
	    for(int i=0;i<m;i++){cin>>a1[i];mp[a1[i]]++;}
	    for(int j=0;j<n;j++){
	        cin>>a2[j];
	        if(mp[a2[j]]==0)
	        {
	            //cout<<a2[j]<<"\n";
	            flag=0;break;
	        }
	    }
	    
	    if(flag==0)cout<<"No\n";
	    else cout<<"Yes\n";
	    
	    
	    
	}
	
	return 0;
}