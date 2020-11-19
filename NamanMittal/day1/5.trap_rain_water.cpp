//https://practice.geeksforgeeks.org/problems/trapping-rain-water/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int lmax=0,rmax=0,lo=0,hi=n-1,total=0;
	    while(lo<=hi){
	        lmax=max(lmax,arr[lo]);
	        rmax=max(rmax,arr[hi]);
	        if(lmax<rmax){
	            total+=lmax-arr[lo];
	            lo++;
	        }
	        else{
	            total+=rmax-arr[hi];
	            hi--;
	        }
	    }
	    cout<<total<<endl;
	}
	return 0;
}