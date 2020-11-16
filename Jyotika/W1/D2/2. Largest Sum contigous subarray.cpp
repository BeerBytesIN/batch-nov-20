/* Kadane's algorithm O(n^3) --> O(n^2) --> O(n) to find the maximum subarray sum '*/
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int maxi= arr[0];
    int choice = arr[0];
    for(int i=1;i<n;i++)
    {
        choice = max(choice + arr[i], arr[i]);
        maxi = max(maxi, choice);
    }
    return maxi;
    
}