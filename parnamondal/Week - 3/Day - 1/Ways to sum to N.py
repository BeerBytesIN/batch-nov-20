# Time Complexity - 0(N*M)
# Space Complexity - O(N)
    
    
class Solution:
    def countWays(self, a, m, n):
        # code here 
        mod=10**9 +7
        mp=[0]*(n+1)
        mp[0]=1
        for i in range (1,n+1):
            for j in range (m):
                if i>=a[j]:
                    mp[i]+=mp[i-a[j]]
        return mp[n]%mod
