
/* Spiral traversal using recursive approach , O(m*n) time complexity and O(1) space complexity*/

#include<iostream>
using namespace std;\
int ar[15][15];
void spiral(int i, int j, int m, int n){
   if(i>=m) return;
   if(j>=n) return;
    
    // first row
    for(int k=i;k<n;k++)
    {
        cout<<ar[i][k]<<" ";
    }
    // last column
    for(int k=i+1;k<m;k++)
    {
        cout<<ar[k][n-1]<<" ";
    }
    // last row
     if((m-1) !=i)
    {
     for(int k=n-2;k>=j;k--)
    {
        cout<<ar[m-1][k]<<" ";
    }
   }
     //first column
    if((n-1) !=j)
    {
    for(int k=m-2;k>i;k--)
    {
        cout<<ar[k][j]<<" ";
    }
   }
    
   
    spiral(i+1, j+1, m-1, n-1);
}
int main()
 {

	int tc;
	cin>>tc;
	while(tc--){
	    int m,n;
	    cin>>m>>n;
	   
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cin>>ar[i][j];
	        }
	    }
	    spiral( 0, 0, m, n); 
	}
	return 0;
}