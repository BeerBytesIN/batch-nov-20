# Time Complexity - O(N*N)
# Space Complexity - O(N)

class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:        
        n1 = len(text1) + 1
        n2 = len(text2) + 1
        memo0 = [0]*n2
        for i in range(1, n1):
            memo1 = [0]*n2
            for j in range(1, n2):
                if text1[i-1] == text2[j-1]:
                    memo1[j] = memo0[j-1] + 1
                else:
                    prev_row = memo0[j]
                    prev_col = memo1[j-1]
                    memo1[j] = prev_col if prev_col > prev_row else prev_row
            memo0 = memo1
        return memo0[-1]


# Time Complexity - O(N*N)
# Space Complexity - O(N*N)

class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        if not text1 or not text2:
            return 0
        n1,n2=len(text1),len(text2)
        dp =[[None]*(n2+1) for i in range(n1+1)] 
        
        for i in range (n1+1):
            for j in range (n2+1):

                if i ==0 or j==0:
                    dp[i][j]=0
                elif text1[i-1]==text2[j-1]:
                    dp[i][j]=dp[i-1][j-1]+1
                else:
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])
        return dp[n1][n2]
                    
        