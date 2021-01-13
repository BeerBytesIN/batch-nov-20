// Link : https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>m>>n;
	    int mat[m][n];
        for(int i=0;i<m;i++)
    	    for(int j=0;j<n;j++)
    	        cin>>mat[i][j];
    	        
	    int k=0,l=0;
	    
	    while(k<m && l<n){
    	    
    	   
    	    // First row : 
    	    for(int i=l;i<n;i++)
    	        cout<<mat[k][i]<<" ";
    	    k++;
    	    // Last column : 
    	    for(int i=k;i<m;i++)
    	        cout<<mat[i][n-1]<<" ";
    	    n--;
    	    // Last row : 
    	    if(k<m){
        	    for(int i=n-1;i>=l;i--)
        	        cout<<mat[m-1][i]<<" ";
        	    m--;
    	    }
            // First column :
            if(l<n){
                for(int i=m-1;i>=k;i--)
                    cout<<mat[i][l]<<" ";
	            l++;
            }
            
        }
	    cout<<endl; 
	}
	return 0;
}
