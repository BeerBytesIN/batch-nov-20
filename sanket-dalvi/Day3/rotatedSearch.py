from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        offset = 0
        for i in range(1, len(nums)):
            if nums[i-1] > nums[i]:
                offset = i
                break

        def getInd(ind):
            return (ind+offset) % len(nums)

        def bSearch(l, h):
            if l < h:
                mid = (l+h)//2
                if nums[getInd(mid)] == target:
                    return getInd(mid)
                elif nums[getInd(mid)] < target:
                    return bSearch(mid+1, h)
                else:
                    return bSearch(l, mid)
            else:
                return -1
        return bSearch(0, len(nums))

# Test
print(Solution().search([4, 5, 6, 7, 0, 1, 2], 2))
