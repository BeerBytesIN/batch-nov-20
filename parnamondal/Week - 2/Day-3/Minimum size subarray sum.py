# Time Complexity - O(Nlog N)
# Space Complexity - O(1)

class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        n=len(nums)
        if n==0 :
            return 0
        res=float('inf')
        curr=0
        left=0
        for i in range (n):
            curr+=nums[i]
            while (curr>=s):
                res=min(res,i+1-left)
                curr-=nums[left]
                left+=1
        if res!=float('inf'):
            return res
        return 0

                
        