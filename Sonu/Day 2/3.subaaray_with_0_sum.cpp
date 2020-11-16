//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0#

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n;i++)
	        cin>>v[i];
	   for(int i=1; i<n; i++)
	    v[i]+=v[i-1];
	    
	    bool bb=true;
	    for(int i=0; i<n; i++)
	        if(v[i]==0) { cout<<"Yes\n"; break; bb=false;}
	   if(!bb) continue;
	   sort(v.begin(), v.end());
	   v.resize(unique(v.begin(), v.end())-v.begin());
	   if(v.size()<n) cout<<"Yes\n";
	   else cout<<"No\n";
	}
	return 0;
}
