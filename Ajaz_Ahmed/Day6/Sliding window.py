class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        if not k:
            return [0]
        window = [ ]
        for i in range(len(nums) - k + 1):
                window.append(max(nums[i:i+k]))
        return window
