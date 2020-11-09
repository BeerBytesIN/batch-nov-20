from collections import Counter
import math


class Solution:
    def getPairsCount(self, arr, n, k):
        c = Counter(arr)
        count = 0
        for key in c:
            if key*2 != k:
                if k-key in c:
                    count += c[key]*c[k-key]
        count //= 2
        if k//2 in c and not k%2:
            count += math.comb(c[k//2], 2)
        return count


# Test
print(Solution().getPairsCount([48, 17, 34, 73, 69, 24, 54, 86, 82, 88, 23, 32, 66, 35, 46, 16, 8, 84, 81, 19, 97, 77, 23, 16, 20, 42, 41, 96, 5, 55, 93, 5, 24, 26, 29, 92, 2, 82, 30, 83, 21, 4, 15, 86, 39, 12], 46, 47))
