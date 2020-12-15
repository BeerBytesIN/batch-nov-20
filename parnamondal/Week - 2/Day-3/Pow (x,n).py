# Time Complexity - O(log N)
# Space Complexity - O(1)

class Solution:
    def myPow(self, x: float, n: int) -> float:
        m=n
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
                
        