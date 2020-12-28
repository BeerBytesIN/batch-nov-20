#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++)
	    cin>>arr1[i];
	    for(int i=0;i<n;i++)
	    cin>>arr2[i];
	    if(n>m){
	        cout<<"No"<<endl;
	        continue;
	    }
	    unordered_map<int,int> um;
	    for(int i=0;i<m;i++)
	    um[arr1[i]]++;
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        if(um.find(arr2[i])==um.end()){
	            flag=false;
	            break;
	        }
	        um[arr2[i]]--;
	    }
	    if(!flag){
	        cout<<"No"<<endl;
	    }
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}