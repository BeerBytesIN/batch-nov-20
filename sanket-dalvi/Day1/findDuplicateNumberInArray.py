from typing import List


class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        numSet = set()
        for num in nums:
            if num in numSet:
                return num
            else:
                numSet.add(num)
        return -1


# Test
print(Solution().findDuplicate([3, 1, 3, 4, 2]))
