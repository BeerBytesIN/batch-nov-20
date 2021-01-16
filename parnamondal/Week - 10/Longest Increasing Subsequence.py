# Time Complexity - O(N*N)
# Space Complexity - O(N)

class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        n=len(nums)
        dp=[1]*(n)
        dp[0]=1
        for i in range (1,n):
            for j in range (i):
                if nums[j] <nums[i] and dp[i]<(dp[j]+1):
                    dp[i]=dp[j]+1
        return max([i for i in dp])
'''from bisect import bisect_left
class Solution:
    #def lengthOfLIS(self, nums: List[int]) -> int:
    def lengthOfLIS(self,nums):
        dp=[]
        for i in nums:
            pos=bisect_left(dp,i)
            if pos==len(dp):
                dp.append(i)
            else:
                dp[pos]=i
        return len(dp)'''
        

        '''bisect.bisect_left returns the leftmost place in the sorted list to insert the given element. bisect.bisect_right returns the rightmost place in the sorted list to insert the given element. An alternative question is when are they equivalent? By answering this, the answer to your question becomes clear. They are equivalent when the the element to be inserted is not present in the list. Hence, they are not equivalent when the element to be inserted is in the list.'''