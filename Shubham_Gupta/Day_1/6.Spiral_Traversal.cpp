#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    int **a=new int*[n];
	    for(int i=0;i<n;i++)
	        a[i] =new int[m];
	    
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++)
	            cin>>a[i][j];
	            
	   int sr=0,sc=0,er=n-1,ec=m-1;
	   
	   while(sr<=er && sc<=ec){
	       for(int j=sc;j<=ec;j++)
	            cout<<a[sr][j]<<" ";
	       sr++;
	       
	       for(int i=sr;i<=er;i++)
	            cout<<a[i][ec]<<" ";
	       ec--;
	       
	       for(int j=ec;j>=sc;j--)
	            cout<<a[er][j]<<" ";
	       er--;
	       
	       for(int i=er;i>=sr;i--)
	            cout<<a[i][sc]<<" ";
	       sc++;
	   }
	   
	}
	return 0;
}