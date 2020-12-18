from typing import List


class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        if not nums: return []
        arr = set()
        def perm(curr, remaining):
            if not remaining:
                arr.add(tuple(curr))
            for i in range(len(remaining)):
                perm(curr+[remaining[i]], remaining[:i]+remaining[i+1:])
        perm([], nums)
        return arr

# Test
print(Solution().permuteUnique([1,1,2]))