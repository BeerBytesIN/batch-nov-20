from typing import List


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def getSeedLength(i):
            l = r = i
            left = right = True
            while left or right:
                if l == 0:
                    left = False
                if r == len(nums)-1:
                    right = False
                if left:
                    if nums[l-1] == nums[l]:
                        l -= 1
                    else:
                        left = False
                if right:
                    if nums[r+1] == nums[r]:
                        r += 1
                    else:
                        right = False
            return (l,r)
        l = 0
        h = len(nums)-1
        while l <= h:
            mid = l + (h-l)//2
            if nums[mid] == target:
                return getSeedLength(mid)
            elif nums[mid] < target:
                l = mid + 1
            else:
                h = mid - 1
        return (-1, -1)


# Test
print(Solution().searchRange(nums = [5,7,7,8,8,10], target = 8))
print(Solution().searchRange(nums = [5,7,7,8,8,10], target = 6))