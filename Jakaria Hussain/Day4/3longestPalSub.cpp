//Link  : https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0#

#include<bits/stdc++.h>
using namespace std;


int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    int n = s.size();
	    bool dp[n][n];
	    memset(dp,0, sizeof(dp));
	    
	    int maxLength = 1;
	    // all string of length 1 is palindrome : 
	    for(int i=0;i<n;i++)
	        dp[i][i];
	        
	    // check for length = 2:
	    int start = 0; 
    	for (int i = 0; i < n - 1; ++i) { 
    		if (s[i] == s[i + 1]) { 
    			dp[i][i + 1] = true; 
    			start = i; 
    			maxLength = 2; 
    		} 
    	}
    	
    	// checking for length > 2 : 
	    for(int k=3;k<=n;++k){
	        for(int i=0;i<n-k+1;i++){
	            int j = i+k-1;
	            
	            if(dp[i+1][j-1] && s[i]==s[j]){
	                dp[i][j]=true;
	                
	                if(k>maxLength){
	                    start = i;
	                    maxLength = k;
	                }
	            }
	        }
	    }
	   // cout<<maxLength<<endl;
	    // now the string from index start to start+maxLength is the required palindrome":
	    for(int i=start;i< start + maxLength;i++)
	        cout<<s[i];
	   cout<<endl;
	    
	}
	return 0;
}
