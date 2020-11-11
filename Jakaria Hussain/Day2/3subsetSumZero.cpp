// Link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    bool flag = false;
        unordered_set<int> sSum;
        
        int sum = 0;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	        sum+=arr[i];
	        if(sum==0 || sSum.find(sum)!=sSum.end())
	        {
	            flag = true;
	           // break;
	        }
	        sSum.insert(sum);
	    }
	    
	    flag ? cout<<"Yes" : cout<<"No";
	    cout<<endl;
	    
	}
	return 0;
}
