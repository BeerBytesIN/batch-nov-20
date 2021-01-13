# Time Complexity : O(NlogN)
# Space Complexity : O(N)
import math
class Solution:
    def numSquares(self, n: int) -> int:
        l=[0]*(n+1)
        l[0]=0
        l[1]=1
        for i in range (2,n+1):
            f=float('inf')
            j=1
            while(j*j<=i):
                #print (j)
                rem=i-j*j
                if l[rem]<f:
                    f=l[rem]
                j+=1
            l[i]=f+1                    
        return l[n]