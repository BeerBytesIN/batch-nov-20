from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, key in enumerate(nums):
            d[key] = i
        for i in range(len(nums)):
            if target-nums[i] in d and nums[i]*2 != target:
                return sorted([i, d[target-nums[i]]])
        for i in range(len(nums)):
            if nums.count(nums[i]) > 1:
                a = nums.index(nums[i])
                b = nums[a+1:].index(nums[i])+a+1
                return sorted([a,b])


# Test
print(Solution().twoSum(nums = [2,7,11,15], target = 9))