# User function Template for Python3

# Time Complexity - O(N.S)
# Space Complexity - O(N.S)

class Solution:
    def equalPartition(self, n, a):
        # code here
        
        if sum(a)%2!=0:
            
            return 0
        ok=sum(a)//2
        dp=[[-1 for i in range (ok+1)] for j in range (n+1)]
        for i in range (n+1):
            for j in range (ok+1):
                if i==0 or j==0:
                    dp[i][j]=False
                elif a[i-1]>j:
                    dp[i][j]=dp[i-1][j]
                elif a[i-1]==j:
                    dp[i][j]=True
                else:
                    dp[i][j]=dp[i-1][j] or dp[i-1][j-a[i-1]]
        return dp[n][ok]
        return 0