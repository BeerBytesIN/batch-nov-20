from collections import Counter
from typing import List
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums)==1: return nums[0]
        c = Counter(nums)
        for key in c:
            if c[key]==1:
                return key
        return -1


# Test
print(Solution().singleNumber([-2,-2,1,1,-3,1,-3,-3,-4,-2]))
# print(Solution().singleNumber([-2,1,1,-3,1,-3,-3,2,-2]))
print(Solution().singleNumber([0,1,0,1,0,1,99]))