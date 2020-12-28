# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
    def trap(self, arr: List[int]) -> int:
        l=[0]*n
        r=[0]*n
        w=0
        l[0]=arr[0]
        r[n-1]=arr[n-1]
        for i in range(1,n):
            l[i]=max(l[i-1],arr[i])
        for i in range(n-2,-1,-1):
            r[i]=max(r[i+1],arr[i])
        for i in range(n):
            w+=min(l[i],r[i])-arr[i]
        return w


