bool subArrayExists(int arr[], int n)
{
    unordered_set<int> x;
    int cumarr[n]={0};
    cumarr[0]=arr[0];
    for(int i=1;i<n;i++){
        cumarr[i]=cumarr[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        if(x.find(cumarr[i])!=x.end()|| cumarr[i]==0){
            return true;
        }
        else{
            x.insert(cumarr[i]);
        }
    }
    return false;
}
