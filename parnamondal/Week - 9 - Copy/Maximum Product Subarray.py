# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n=len(nums)
        ma,mi=1,1
        p=float('-inf')
        for i in range (n):
            if nums[i]<0:
                ma,mi=mi,ma
            ma=max(nums[i]*ma,nums[i])
            mi=min(nums[i]*mi,nums[i])
            p=max(p,ma)
        return p
            
            
        