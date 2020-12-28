# Time Complexity - O( N)
# Space Complexity - O(1)
import sys
sys.setrecursionlimit(100000000)
class Solution:
    def myPow(self, m: float, n: int) -> float:
        def pow(m,n):
            
            if n==0:
                return 1
            elif n%2==0:
                return pow(m*m , n//2)
            else:
                return m*pow(m,n-1)
        p=n
        if n<0:
            n*=-1
        
        ans=pow(m,n)
        #print(ans)
        if p<0:
            return 1.0/ans
        else:
            return ans

        '''m=n
        if n<0:
            n*=-1
        ans=1.0
        while (n>0):
            if n%2==1:
                ans*=x
                n-=1
            else:
                x*=x
                n/=2
        if m<0:
            return 1.0/ans
        return ans
                '''
        