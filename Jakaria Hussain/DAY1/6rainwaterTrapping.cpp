// Link  : https://practice.geeksforgeeks.org/problems/trapping-rain-water/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    int prev_max[n],next_max[n];
	    for(int i=0;i<n;i++)
	        if(i==0) prev_max[i] = arr[i];
	        else prev_max[i] = max(prev_max[i-1], arr[i]);
	    
	    for(int i=n-1;i>=0;i--){
	        if(i==n-1) next_max[i] = arr[i];
	        else next_max[i] = max(next_max[i+1],arr[i]);
	    }
	    
	    int total_water = 0;
	    for(int i=1;i<n-1;i++){
	        total_water += min(prev_max[i],next_max[i]) - arr[i];
	    }
	    cout<<total_water<<endl;
	    
	}
	return 0;
}
