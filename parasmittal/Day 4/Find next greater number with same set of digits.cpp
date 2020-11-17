#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int findpos(vector<int> arr,int n){
    int i=n-2;
    for(;i>=0;i--){
        if(arr[i]<arr[i+1])
        break;
    }
    return i;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    int val;
	    for(int i=0;i<n;i++){
	        cin>>val;
	    arr.push_back(val);
	    }
	    int pos=findpos(arr,n);
	    if(pos!=-1){
	        int j=n-1;
	        while(j>=0 && arr[j]<=arr[pos])
	        j--;
	        swap(arr[j],arr[pos]);
	    }
	    reverse(arr.begin()+pos+1,arr.end());
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}