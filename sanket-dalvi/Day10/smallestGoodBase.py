import timeit

class Solution:
    def smallestGoodBase(self, n: str) -> str:
        n = int(n)
        def getNum(num, digits):
            return sum(map(lambda i: num**i, range(digits)))
        def bCalc(n,totalDigits):
            l = 0
            h = n
            while l < h:
                mid = l + (h-l)//2
                midNum = getNum(mid, totalDigits)
                if midNum == n:
                    return mid
                elif midNum < n:
                    l = mid + 1
                else:
                    h = mid
            return -1
        for i in range(60, 0, -1):
            c = bCalc(n, i)
            if c >= 2:
                return str(c)
        return str(n-1)



# Test
start = timeit.default_timer()
print(Solution().smallestGoodBase(str(10**18)))
print(Solution().smallestGoodBase(str(4681)))
print(timeit.default_timer()-start)
