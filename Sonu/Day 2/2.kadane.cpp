

#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int ans=arr[0];
    int maxi=ans;
    for(int i=1; i<n; i++){
        maxi=max(arr[i], maxi+arr[i]);
        ans=max(ans, maxi);
    }
    return ans;
    
}


int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
