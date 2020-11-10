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
	    int store=0;
	    int left=0;
	    int right=n-1;
	    int leftmax=0,rightmax=0;
	    while(left<right){
	        if(arr[left]<arr[right]){
	            if(arr[left]>=leftmax)
	            leftmax=arr[left];
	            else
	            store+=leftmax-arr[left];
	            left++;
	        }
	        else{
	            if(arr[right]>=rightmax)
	            rightmax=arr[right];
	            else
	            store+=rightmax-arr[right];
	            right--;
	        }
	    }
	    cout<<store<<endl;
	}
	return 0;
}