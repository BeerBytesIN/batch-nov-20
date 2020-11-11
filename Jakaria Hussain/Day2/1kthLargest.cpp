//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int partition(int arr[], int l, int r){
    int x = arr[r], i=l;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<=x){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[r]);
    return i;
}
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    /* //Solution using Priority queue(max_heap) - O(n^2) : 
    priority_queue<int> pq;
    
    for(int i=l;i<=r;i++){
        pq.push(arr[i]);
        if(pq.size()>k)
            pq.pop();
    }
    return pq.top();
    */
    // Solution using Quick select concept : 
    if(k>0 && k<=r-l+1){
        int pos = partition(arr,l,r);
        
        if(pos-l == k-1)
            return arr[pos];
        else if(pos - l > k-1)
            return kthSmallest(arr,l,pos-1,k);
        else return kthSmallest(arr,pos+1,r,k-pos+l-1);
    }
    return INT_MAX;
}
