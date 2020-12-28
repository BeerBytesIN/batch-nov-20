from itertools import combinations
from typing import List
class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = {()}
        nums.sort()
        for i in range(len(nums)):
            for j in combinations(nums,i+1):
                res.add(j)
        return res

# Test
print(Solution().subsetsWithDup([4,4,4,1,4]))