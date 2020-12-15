# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        n=len(nums)
        if n<=1:
            return 0
        for i in range (n-1):
            if i!=0:
                if nums[i]>nums[i+1] and nums[i]>nums[i-1]:
                    return i
            if i==0:
                if nums[i]>nums[i+1]:
                    return i
                
        return n-1
            
        