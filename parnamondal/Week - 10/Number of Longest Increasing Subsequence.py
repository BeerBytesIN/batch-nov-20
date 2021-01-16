# Time Complexity - O(N*N)
# Space Complexity - O(N)

class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        n=len(nums)
        dp=[1]*(n)
        count=[1]*n
        res=0
        dp[0]=1
        count[0]=1
        for i in range (1,n):
            for j in range (i):
                if nums[j] <nums[i] and dp[i]<(dp[j]+1):
                    dp[i]=dp[j]+1
                    count[i]=count[j]
                elif dp[i]==dp[j]+1:
                    count[i]+=count[j]
                    
        d=max(f for f in dp)
        for k,b in zip(dp,count):
            if k==d:
                res+=b
        return res
        #return max([i for i in dp])
        
        
        