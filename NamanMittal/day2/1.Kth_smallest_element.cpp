int randompivot(int arr[],int l,int r){
    int range=r-l+1;
    int x=l+rand()%range;
    swap(arr[x],arr[r]);
}
int kthSmallest(int arr[], int l, int r, int k) {
    randompivot(arr,l,r);
    int pivot=arr[r];
    int i=l,j=l;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            swap(arr[i++],arr[j]);
        }
    }
    swap(arr[i],arr[r]);
    if(i+1==k){
        return arr[i];
    }
    else{
        if(i+1>k){
            return kthSmallest(arr,l,i-1,k);
        }
        else{
            return kthSmallest(arr,i+1,r,k);
        }
    }
}