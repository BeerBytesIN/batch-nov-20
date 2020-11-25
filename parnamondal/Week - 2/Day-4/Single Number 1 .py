# Time Complexity - 0(N)
# Space Complexity - O(1)
    
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        n=len(nums)
        # Maths concept 
        '''time- O(N)
        space - O(N)
        return 2*sumSet(nums)-sum(nums)
    
        '''
        
        f=nums[0]
        for i in nums[1:]:
            f^=i 
        return f