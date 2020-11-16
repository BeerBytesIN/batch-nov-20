// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
         if(maxsum<sum)
            maxsum=sum;
        if(sum<0)
        sum=0;
    }
    return maxsum;
    
}