# time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if len(nums)<=1:
            return nums
        ind=0
        n=len(nums)
        for i in range (n-1,0,-1):
            if nums[i]>nums[i-1]:
                ind=i
                break
        
        if ind==0:
            nums.reverse()
            return nums
        else:
            ind-=1
            j=0
            for i in range (n-1,ind,-1):
                if nums[ind]<nums[i]:
                    j=i
                    break
            nums[ind],nums[j]=nums[j],nums[ind]
            nums[ind+1:]=sorted(nums[ind+1:]) 
            return nums
            
            
                
                
        
        
        
        