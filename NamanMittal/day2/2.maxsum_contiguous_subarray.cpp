int maxSubarraySum(int arr[], int n){
    int currsum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        if(currsum<0){
            currsum=0;
        }
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}