# Time Complexity - O(N*2to the power of N)
# Space Complexity  - O(N*2to the power of N)

class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        n=len(nums)
        nums.sort()
        def backtrack(first=0,curr=[]):
            if len(curr)==k:
                if curr not in output:
                    output.append(curr[:])
                    return 
            for i in range (first,n):
                curr.append(nums[i])
                backtrack(i+1,curr)
                curr.pop()
        output=[]
        for k in range (0,n+1):
            backtrack()
        return output

        