from typing import List

from collections import Counter


class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        count = 0
        c = Counter(nums)
        if k == 0:
            for i in c:
                if c[i] >= 2:
                    count += 1
        else:
            for i in c:
                if i - k in c:
                    count += 1
                if i + k in c:
                    count += 1
            count //= 2
        return count


# Test
print(Solution().findPairs(nums=[3, 1, 4, 1, 5], k=2)) # Output:2
print(Solution().findPairs(nums = [1,2,3,4,5], k = 1)) # Output:4
print(Solution().findPairs(nums = [1,3,1,5,4], k = 0)) # Output:1
print(Solution().findPairs(nums = [1,2,4,4,3,3,0,9,2,3], k = 3)) # Output:2
print(Solution().findPairs(nums = [-1,-2,-3], k = 1)) # Output:2