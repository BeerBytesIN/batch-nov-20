from typing import List


class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res = []

        def trav(left, right, currK, start):
            if not right or currK == 0:
                nonlocal res
                res.append(left)
                return
            for i in range(start, len(right)-currK+1):
                trav(left+[right[i]], right[:i]+right[i+1:], currK-1, i)
        trav([], list(range(1, n+1)), k, 0)
        return res


# Test
print(Solution().combine(n=4, k=2))
print(Solution().combine(20, 10))
