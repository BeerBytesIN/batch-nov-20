class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1
        if len(nums) == 1:
            return 0
        while(l <= r):
            mid = (l+r)//2
            if mid == 0:
                if nums[mid] > nums[mid + 1]:
                    return mid
            elif r == mid:
                if nums[mid] > nums[mid - 1]:
                    return mid
            if nums[mid] > nums[mid + 1] and nums[mid] > nums[mid - 1]:
                return mid
            elif nums[mid] > nums[mid + 1]:
                r = mid  - 1
            else:
                l = mid  + 1
