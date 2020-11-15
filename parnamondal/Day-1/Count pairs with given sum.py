# As per given in geeksforgeeks

# Time Complexity - 0(N*N)
# Space Complexity - 0(1)

class Solution:
    def getPairsCount(self, a, n, k):
        count=0
        for i in range (n):
            for j in range (i+1,n):
                if a[i]+a[j]==k:
                    count+=1
        return count
             

# Fcaed TLE could not find any better approach for this problem in python 