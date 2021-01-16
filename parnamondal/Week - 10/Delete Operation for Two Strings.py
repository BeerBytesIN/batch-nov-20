# Time Complexity - O(N*N)
# Space Complexity - O(N)

class Solution:
    def minDistance(self, text1: str, text2: str) -> int:
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
        return len(text1)+len(text2)-2*memo0[-1]
        