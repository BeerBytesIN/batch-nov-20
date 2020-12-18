from typing import List


class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        l = 0
        h = len(nums)-1
        if len(nums) == 2:
            if nums[0] > nums[1]:
                return 0
            else:
                return 1
        while l <= h:
            mid = (l+h)//2
            if l+1 == h:
                return l if nums[l]>nums[h] else h
            elif mid == len(nums)-1:
                return mid
            elif mid == 0:
                return mid
            elif nums[mid-1] < nums[mid] > nums[mid+1]:
                return mid
            elif nums[mid-1] > nums[mid]:
                h = mid - 1
            elif nums[mid+1] > nums[mid]:
                l = mid + 1
        return l

# Test
print(Solution().findPeakElement([1,2,1,3,5,6,4]))
print(Solution().findPeakElement([3,4,5,3,2,1]))