#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n ;i++) cin>>a[i];
	    int k;
	    cin>>k;
	    deque<int> que;
	    int *ans=new int [n-k+1]();
	    for(int i=0;i<k;i++){
	        if(a[i]<0) que.push_back(i);
	    }
	    if(!que.empty())
	    ans[0]=a[que.front()];
	    int idx=1;
	    for(int i=k;i<n;i++){
	        while(!que.empty() && que.front()<(i-k+1))que.pop_front();
	        if(a[i]<0) que.push_back(i);
	        if(!que.empty())ans[idx]=a[que.front()];
	        idx++;
	    }
	    
	    for(int i=0;i<n-k+1;i++) cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}