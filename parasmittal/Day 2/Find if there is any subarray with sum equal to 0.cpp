#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    bool flag=false;
	    unordered_map<int,int> um;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        if(sum==0){
	            flag=true;
	            break;
	        }
	        if(um.find(sum)!=um.end()){
	            flag=true;
	            break;
	        }
	        um[sum]++;
	    }
	    if(flag)
	    cout<<"Yes";
	    else
	    cout<<"No";
	    cout<<endl;
	}
	return 0;
}