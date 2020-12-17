
# Time Complexity- O(N).
# Space Complexity - O(N)

from collections import deque
def max_of_subarrays(arr,n,k):
    if k>n:
        return max(arr)
    q=deque()
    res=[]
    for i in range (n):
        if i-k>=0:
            res.append(arr[q[0]])
            while q and q[0]<=i-k:
                q.popleft()
        while q and arr[i]>arr[q[-1]]:
            q.pop()
        q.append(i)
    res.append(arr[q[0]])
    return res

