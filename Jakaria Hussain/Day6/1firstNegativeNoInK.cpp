// Link : https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0#

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,k;
	   cin>>n;
	   
	   int arr[n];
	   for(int i=0;i<n;i++) cin>>arr[i];
	   
	   cin>>k;
	   
	   vector<int> ans;
	   deque<int> dq;
	   
	   for(int i=0;i<k;i++) 
	        if(arr[i]<0) dq.push_back(i);
	        
	   for(int i=k;i<n;i++){
	       if(!dq.empty())
	            ans.push_back(arr[dq.front()]);
	        else ans.push_back(0);
	        
	        while(!dq.empty() && dq.front() < i-k+1)
	            dq.pop_front();
	        if(arr[i] < 0) dq.push_back(i);
	        
	   }
	   if(!dq.empty()) ans.push_back(arr[dq.front()]);
	   else ans.push_back(0);
	   
	   for(int x : ans) cout<<x<<" ";
	   cout<<endl;
	   
	}
	return 0;
}


