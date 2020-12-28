# Time Complexity - 0(N^2*N!)
# Space Complexity - O(N!)
from itertools import permutations
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        out=[]
        '''n=len(nums)
        def perm(nums,l,r):
            if l==r:
                out.append(nums)
            for i in range (l,r+1):
                nums[l],nums[i]=nums[i],nums[l]
                perm(nums,l+1,r)
                nums[l],nums[i]=nums[i],nums[l]
        perm(nums,0,n-1)'''
        for i in permutations(nums):
            out.append(list(i))
        return out
        
        