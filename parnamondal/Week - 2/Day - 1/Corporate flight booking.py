# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
    def corpFlightBookings(self, bo: List[List[int]], n: int) -> List[int]:
        if n==0:
            return []
        ans=[0]*(n+1)
        for i in bo:
            a1,a2,am=i
            ans[a1-1]+=am
            ans[a2]-=am
        pr=ans[0]
        for i in range (1,n):
            pr=ans[i]=ans[i]+pr
        return ans[:n]
        