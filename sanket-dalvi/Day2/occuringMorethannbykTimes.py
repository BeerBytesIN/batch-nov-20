from collections import Counter
class Solution:
    def maxNK(self, arr, n, k):
        c = Counter(arr)
        res = []
        for key in c:
            if c[key]>n/k:
                res.append(key)
        return res

# Test
arr = [3, 1, 2, 2, 2, 1, 4, 3, 3]
k = 5
print(Solution().maxNK(arr, len(arr), k))