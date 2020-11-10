ef maxSubArraySum(a,size):
    ##Your code here
    mf=0
    end=float('-inf')
    for i in range (size):
        mf+=a[i]
        if mf>end:
            end=mf
        if mf<0:
            mf=0
    return end
            
# Time Complexity - O(N)
# Space Complexity - o(1)