int Solution::cntBits(vector<int> &A) {
    long long int count=0;
    for(int i=0;i<32;i++){
        long long int onesum=0,zerosum=0;
        long long int val=1<<i;
        for(int j=0;j<A.size();j++){
            if(A[j] & val)
                onesum++;
            else
                zerosum++;
        }
        count=(count+((2*zerosum*onesum)%1000000007 ))%1000000007;
    }
    return (count)%1000000007;
}
