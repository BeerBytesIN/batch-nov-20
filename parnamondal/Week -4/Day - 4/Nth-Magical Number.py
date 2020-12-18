# Time Complexity - O(log N)
# Space Complexity - O(1)

class Solution:
    def nthMagicalNumber(self, N: int, A: int, B: int) -> int:
        m=10**9 +7
        def gcd(a,b):
            if b==0:
                return a
            return gcd(b,a%b)
        def lcm(a,b):
            return (a*b)//gcd(a,b)
        ok=lcm(A,B)
        l,h=0,10**17
        while (l<h):
            mid=(l+h) //2
            tar=(mid//A) + (mid//B) -  (mid//ok)
            if tar<N:
                l=mid+1
            else:
                h=mid
        return h%m
        