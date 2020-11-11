from typing import List


class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if len(nums) <= 1: return nums
        for i in range(len(nums)-2, -1, -1):
            if nums[i] < nums[i+1]:
                ind = -1
                num = float("inf")
                for j in range(i+1, len(nums)):
                    if nums[i] < nums[j] and num >= nums[j]:
                        num = nums[j]
                        ind = j
                nums[i], nums[ind] = nums[ind], nums[i]
                q = []
                while i+1 < len(nums):
                    q.append(nums.pop())
                nums.extend(q)
                return
        nums.sort()
                        

# Test
arr = [2,3,1,3,3]
Solution().nextPermutation(arr)
print(arr)