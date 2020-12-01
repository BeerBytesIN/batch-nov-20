# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n=len(nums)
        s=0
        d={i:True for i in nums}
        for i in range (n):
            if not d[nums[i]]:
                continue
            d[nums[i]]=False
            curr=1
            left,right=nums[i]-1,nums[i]+1
            while left in d:
                d[left]=False
                curr+=1
                left-=1
            while right in d:
                d[right]=False
                curr+=1
                right+=1
            if curr>s:
                s=curr
        return s
        
        