#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    unordered_map<int,int> um;
	    for(int i=0;i<n;i++)
	    um[arr[i]]++;
	    int times=n/k;
	    for(auto x:um){
	        if(x.second>times)
	        cout<<x.first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}