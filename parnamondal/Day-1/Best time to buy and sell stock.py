# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def maxProfit(self, a: List[int]) -> int:
        if len(a)==0:
            return 0
        part=10**9+7
        res=0
        for i in range (len(a)):
            part=min(part,a[i])
            res=max(res,a[i]-part)
        return res
            