from functools import reduce
from operator import xor
from typing import List
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums)==1: return nums[0]
        return reduce(xor, nums)

# Test
print(Solution().singleNumber([4,1,2,1,2]))