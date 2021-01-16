# Time Complexity - O(N*N)
# Space Complexity - O(N*N)

class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        l1 = len(s1) + 1
        l2 = len(s2) + 1

        dp = [[0 for _ in range(l2)] for _ in range(l1)]

        for i in range(1, l1):
            dp[i][0] = dp[i-1][0] + ord(s1[i-1])

        for j in range(1, l2):
            dp[0][j] = dp[0][j-1] + ord(s2[j-1])

        for i in range(1, l1):
            for j in range(1, l2):
                if s1[i-1] == s2[j-1]:
                    dp[i][j] = dp[i-1][j-1]
                else:
                    dp[i][j] = min(dp[i-1][j] + ord(s1[i-1]), dp[i][j-1] + ord(s2[j-1]), dp[i-1][j-1] + ord(s1[i-1]) + ord(s2[j-1]))

        return dp[-1][-1]
