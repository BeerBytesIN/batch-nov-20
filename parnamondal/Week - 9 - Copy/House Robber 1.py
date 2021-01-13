# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        if n==0 : return 0
        if n==1 : return nums[0]
        if n==2 : return max(nums[0],nums[1])
        f1,f2=nums[0],max(nums[0],nums[1])
        for i in range (2,n):
            s=f1+nums[i]
            if s>f2:
                f1=f2
                f2=s
            else:
                f1,f2=f2,f2
        return max(f1,f2)
                                     