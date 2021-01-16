# Time Complexity - O(N*N)
# Space Complexity - O(N*N)

class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        if not s or not t:
            return 0
        if s==t:
            return 1
        ns,nt=len(s),len(t)
        dp=[[0 for i in range (ns+1)]for j in range (nt+1)]
        
        for i in range(len(s) + 1):
            dp[0][i] = 1 # Only empty string of S match empty string T
            
        for i in range(1, len(s) + 1):
             for j in range(1, len(t) + 1):
                    dp[j][i] = dp[j][i - 1]
                    if s[i - 1] == t[j - 1]:
                        dp[j][i] += dp[j - 1][i -1]
        
        return dp[len(t)][len(s)]