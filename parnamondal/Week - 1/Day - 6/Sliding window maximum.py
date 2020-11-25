# Time Complexity - O(N)
# Space Complexity - O(K)
from collections import deque
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        n=len(nums)
        q=deque()
        res=[]
        for i in range (n):
            if i-k>=0:
                res.append(nums[q[0]])
                while q and q[0]<=i-k:
                    q.popleft()
            while q and nums[i]>nums[q[-1]]:
                q.pop()
            q.append(i)
        res.append(nums[q[0]])
        return res
        
        '''queue=[]
        queue=[i for i in nums[:k]]
        ans=[max(queue)]
        for i in range (k,n):
            queue.pop(0)
            queue.append(nums[i])
            maximum=max(queue)
            ans.append(maximum)
        return ans
            '''