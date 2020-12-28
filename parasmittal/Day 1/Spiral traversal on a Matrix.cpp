#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    vector<vector<int>> arr(m,vector<int>(n,0));
	    for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    cin>>arr[i][j];
	    int rowstart=0,rowend=m-1,colstart=0,colend=n-1;
	    while(1){
	        if(rowstart>rowend || colstart>colend)
	        break;
	        for(int i=colstart;i<=colend;i++){
	        cout<<arr[rowstart][i]<<" ";
	        }
	        rowstart++;
	        for(int i=rowstart;i<=rowend;i++){
	        cout<<arr[i][colend]<<" ";
	        }
	        colend--;
	        if(rowend>=rowstart){
	            for(int i=colend;i>=colstart;i--){
	        cout<<arr[rowend][i]<<" ";
	        }
	        rowend--;
	        }
	        if(colend>=colstart){
	            for(int i=rowend;i>=rowstart;i--){
	        cout<<arr[i][colstart]<<" ";
	        }
	        colstart++; 
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}