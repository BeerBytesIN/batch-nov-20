#include<bits/stdc++.h>
using namespace std;

bool bsearch(int arr[], int x, int n){
    int st = 0, en = n-1;
    while(st<=en){
        int mid = (st+en) >> 1;
        if(arr[mid]==x) return true;
        else if(arr[mid]<x) st=mid+1;
        else en = mid -1;
    }
    return false;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    
	    for(int i=0;i<m;i++) cin>>arr1[i];
	    for(int i=0;i<n;i++) cin>>arr2[i];
	    sort(arr1,arr1+m);
	   
	    int x=0,y=0;
	    bool flag = true;
	    while(y<n){
	        if(!bsearch(arr1,arr2[y],m)){
	            flag = false;
	            break;
	        } 
	        y++;
	    }
	    if(flag) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    
	}
	return 0;
}
