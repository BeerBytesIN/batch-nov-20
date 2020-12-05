int maxLen(int arr[], int n)
{
    // Your code here
    int sum=0;
    int maxlen=0;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxlen=i+1;
            continue;
        }
        if(um.find(sum)!=um.end()){
            maxlen=max(maxlen,i-um[sum]);
        }
        else
        um[sum]=i;
        
    }
    return maxlen;
}