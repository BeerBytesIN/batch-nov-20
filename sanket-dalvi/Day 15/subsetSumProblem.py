import sys
from typing import List
sys.setrecursionlimit(1000000)
class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        dp = {}
        def isSum(s, arr):
            if s==0: return True
            if s<0 or not arr: return False
            if (s,arr) not in dp:
                dp[s,arr] = isSum(s-arr[-1], arr[:-1]) or isSum(s, arr[:-1])
            return dp[s, arr]
        sumNum = sum(nums)
        if sumNum%2:
            return False
        return isSum(sumNum//2, tuple(nums))