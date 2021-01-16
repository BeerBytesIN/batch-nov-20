# Time Complexity - O(N*N)
# Space Complexity - O(N)

class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        n=len(pairs)
        if not pairs:
            return 0
        pairs.sort(key =lambda x:x[0])
        
        dp=[1]*(n)
        dp[0]=1
        for i in range (1,n):
            for j in range (i):
                if pairs[j][1] <pairs[i][0] and dp[i]<(dp[j]+1):
                    dp[i]=dp[j]+1
        return max([i for i in dp])
        
        
# Time Complexity - O(NlogN)
# Space Complexity - O(1)

class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        pairs.sort()
        ans=1
        cu=pairs.pop()[0]
        while pairs:
            a,b=pairs.pop()
            if b<cu:
                cu=a
                ans+=1 
        return ans
        
