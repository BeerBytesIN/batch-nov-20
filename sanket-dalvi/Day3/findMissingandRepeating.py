from collections import Counter
class Solution:
    def findTwoElement(self, arr, n):
        res = [-1, -1]
        c = Counter(arr)
        for i in range(1, n+1):
            if i in c:
                if c[i]>1:
                    res[0] = i
            else:
                res[1] = i
            if res[0]!=-1 and res[1]!=-1:
                break
        return res


# Test
arr = [1, 3, 3]
print(Solution().findTwoElement(arr, len(arr)))
