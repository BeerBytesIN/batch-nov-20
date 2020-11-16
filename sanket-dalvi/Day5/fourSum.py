from typing import List


class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        res = set()
        if len(nums) < 4:
            return res
        nums.sort()

        def twoSum(arr, t, i, j):
            l = 0
            h = len(arr)-1
            while l < h:
                if arr[l]+arr[h] == t:
                    res.add((nums[i], nums[j], arr[l], arr[h]))
                    l += 1
                    h -= 1
                elif arr[l]+arr[h] > t:
                    h -= 1
                else:
                    l += 1
        for i in range(len(nums)-2):
            for j in range(i+1, len(nums)-1):
                t = target-nums[i]-nums[j]
                twoSum(nums[j+1:], t, i, j)
        return sorted(res)


# Test
print(Solution().fourSum([-3,-2,-1,0,0,1,2,3], 0))
