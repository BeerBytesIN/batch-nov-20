// Link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum = INT_MIN, curr = 0;
    
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr>sum) sum = curr;
        if(curr<0) curr=0;
    }
    return sum;
}
