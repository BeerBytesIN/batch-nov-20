import sys
sys.setrecursionlimit(10000000)
class Solution:
    def __init__(self):
        # self.allPal = ""
        self.start = 0
        self.end = 0

    def getSeedPair(self, i, j, A):
        while A[i] == A[j]:
            if (j-i>self.end-self.start) or (j-1==self.end-self.start and i<self.start):
                self.start, self.end = i, j
            if i-1 >= 0 and j+1 < len(A):
                i, j = i-1, j+1
            else:
                break
    
    def longestPalindrome(self, s: str) -> str:
        A = s
        if A == "":
            return ""
        if A == A[::-1]:
            return A
        for i in range(1, len(A)-1):
            self.getSeedPair(i-1, i+1, A)
            self.getSeedPair(i-1, i, A)
        self.getSeedPair(len(A)-2, len(A)-1, A)
        return A[self.start:self.end+1]

t = int(input())
for _ in range(t):
    print(Solution().longestPalindrome(input()))