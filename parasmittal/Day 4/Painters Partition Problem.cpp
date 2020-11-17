bool isPossible(int* arr,int n,int m,int curr_min){
    int student_req=1;
    int curr_sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>curr_min)
        return false;
        if(curr_sum+arr[i]>curr_min){
            student_req++;
            curr_sum=arr[i];
            if(student_req>m)
            return false;
        }
        else{
            curr_sum+=arr[i];
        }
    }
}
int findPages(int *arr, int n, int m) {
    //code here
    if(m>n)
    return -1;
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    int result=INT_MAX;
    int start=0;
    int end=sum;
    while(start<=end){
        int mid=end-(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            result=min(result,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(result==INT_MAX)
    return -1;
    return result;
}
