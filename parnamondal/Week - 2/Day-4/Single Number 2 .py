# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        n=len(nums)
        ones,twos=0,0
        for i in range (n):
            #ones xor with current number - and of this result with complement of twos 
            ones= (ones^nums[i])&(~twos)
            twos=(twos^nums[i])&(~ones)
        return ones
        
            
        