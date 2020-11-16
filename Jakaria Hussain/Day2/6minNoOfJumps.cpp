
// Link : https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0
// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){
    // Your code here
    if(arr[0]==0) return -1;
    
    int dp[n];
    
    dp[0] = 0;
    int i,j;
    
    for(i=1;i<n;i++){
        dp[i] = INT_MAX;
        
        for(j=0;j<n;j++){
            if(i<=j+arr[j] && dp[j]!=INT_MAX){
                dp[i] = min(dp[i],dp[j]+1);
                break;
            }
        }
        
    }
    if(dp[n-1]!=INT_MAX) return dp[n-1];

    return -1;
}
