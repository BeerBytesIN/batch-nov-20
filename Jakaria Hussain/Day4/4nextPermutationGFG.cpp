// Link  : https://practice.geeksforgeeks.org/problems/next-permutation/0#
#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int i,j,n;cin>>n;
	    
	    int arr[n];
	    for(i=0;i<n;i++) cin>>arr[i];
	    
	    int x = 0;
	    for(i=n-1;i>=0;i--){
	        if(i==0){
	            x=-1;
	            break;
	        }
	        if(arr[i-1]<arr[i])
	        {
	            x=i-1;
	            break;
	        }
	    }
	    
	    if(x==-1){
	        sort(arr,arr+n);
	        
	    }else{
	        
    	    int l = x+1, r = n-1;
    	    for(i=r;i>=l;i--){
    	        if(arr[i]>arr[x]) 
    	            { l = i; break;}
    	    }
    	    swap(arr[x],arr[l]);
    	    
    	    sort(arr+x+1,arr+n);
	    }
	    for(int y=0;y<n;y++) cout<< arr[y] <<" ";
	       // cout<<arr[<<" ";
	       
	    cout<<endl;
	    
	}
	return 0;
}
