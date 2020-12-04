//link: https://www.interviewbit.com/problems/square-root-of-integer/
int Solution::sqrt(int A) {
    int start = 1, end = A/2;
    
    if(A<=1) return A;
    if(A<=3) return 1;
    
    long mid = start + (end-start)/2;
    
    while(start<=end){
        
        mid = start + (end-start)/2;
        
        if(mid*mid <= A && (mid+1)*(mid+1) > A) return mid;
        else if(mid>A/mid) end = mid-1;
        else start = mid+1;
        
        
    }
    return (int)mid;
}
