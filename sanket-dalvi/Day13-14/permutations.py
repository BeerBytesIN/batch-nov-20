from typing import List


class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if not nums: return []
        arr = []
        def perm(curr, remaining):
            if not remaining:
                arr.append(curr)
            for i in range(len(remaining)):
                perm(curr+[remaining[i]], remaining[:i]+remaining[i+1:])
        perm([], nums)
        return arr

# Test
print(Solution().permute([1,2,3]))