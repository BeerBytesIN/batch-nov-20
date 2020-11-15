# Time Complexity - O(1)
# Space Complexity - O(1)

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if len(nums)==0 or target not in nums:
            return -1
        return nums.index(target)