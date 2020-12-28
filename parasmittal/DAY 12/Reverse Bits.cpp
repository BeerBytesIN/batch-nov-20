unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    int j=31;
    for(int i=0;i<32;i++){
        int val=(1<<i) & A;
       
        if(val)
        ans|=((1<<j));
        j--;
        
    }
   
    return ans;
}
