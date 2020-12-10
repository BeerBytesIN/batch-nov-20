class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if target in nums:
            index = nums.index(target)
            return index
        return -1
