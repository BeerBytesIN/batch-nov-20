import sys
sys.setrecursionlimit(10000000)
class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        neg = False
        if n < 0:
            neg = True
            n = -n
        # for i in range(2, n+1):
        #     if round(res, 4) == round(res*x, 4):
        #         break
        #     res *= x
        def power(p):
            if p==0:
                return 1
            elif p==1:
                return x
            else:
                half = power(p//2)
                h = half*half
                if p%2:
                    return x*h
                else:
                    return h
        if neg:
            return 1/power(n)
        else:
            return power(n)

# Test
print(Solution().myPow(1.0003,2**31-2))
print(Solution().myPow(1.00000003, 2147483646))