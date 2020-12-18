from typing import List


class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        if not nums: return 0
        minLength = float("inf")
        start = 0
        end = 1
        currSum = nums[0]
        while end <= len(nums):
            if currSum >= s:
                minLength = min(minLength, end-start)
                currSum -= nums[start]
                start += 1
            elif currSum < s:
                if end == len(nums):
                    break
                currSum += nums[end]
                end += 1
        if minLength == float("inf"):
            return 0
        return minLength

# Test
print(Solution().minSubArrayLen(s = 7, nums = [2,3,1,2,4,3]))
print(Solution().minSubArrayLen(s = 10, nums = [1,2,3]))