//Method-1(Using quicksort)
int sortAndMid(int arr[],int n){
    sort(arr,arr+n);
    return arr[n/2];
}
int replace(int arr[],int val,int l,int r){
    for(int i=l;i<r;i++){
        if(arr[i]==val){
            swap(arr[i],arr[r]);
            break;
        }
    }
}
int partition(int arr[],int val,int l,int r){
    replace(arr,val,l,r);
    int pivot=val;
    int j=l;
    for(int i=l;i<r;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    swap(arr[r],arr[j]);
    return j;
}
// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    if(r-l+1<k || k<=0) return INT_MAX;
    int n=r-l+1;
    int partitionArr[(n+4)/5];
    int i=0;
    for(;i<n/5;i++){
      partitionArr[i]=  sortAndMid(arr+l+i*5,5);
    }
    if(i*5<n){
        partitionArr[i]=sortAndMid(arr+l+i*5,n%5);
        i++;
    }
    int midOfMid= (i==1)?partitionArr[0] : kthSmallest(partitionArr,0,i-1,i/2);
    int pos=partition(arr,midOfMid,l,r);
    if(pos-l+1==k) return arr[pos];
    if(pos-l+1>k) return kthSmallest(arr,l,pos-1,k);
    return kthSmallest(arr,pos+1,r,k-pos+l-1);
    
}


//Method-2(Using frequenecy of element)
//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int maxele=INT_MIN;
    int n=r-l+1;
    for(int i=0;i<n;i++)
    if(arr[i]>maxele)
    maxele=arr[i];
    vector<int> freq(maxele+1,0);
    int count=0;
    for(int i=0;i<n;i++)
    freq[arr[i]]++;
    for(int i=1;i<=maxele;i++)
    {
        count+=freq[i];
        if(count>=k)
        return i;
    }
    return -1;
}