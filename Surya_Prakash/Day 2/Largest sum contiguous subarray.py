def maxSubArray(self, nums: List[int]) -> int:
    maxx = -float('inf')
    curr = 0
    for i in nums:
        curr += i
        maxx = max(maxx, curr)
        if curr < 0: curr = 0
    return (maxx)