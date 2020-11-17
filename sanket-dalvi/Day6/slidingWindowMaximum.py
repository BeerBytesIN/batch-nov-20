from typing import List


from collections import deque

# class Solution:
#     def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
#         q = deque(nums[:k])
#         mx = max(q)
#         res = [mx]
#         for i in range(k, len(nums)):
#             q.append(nums[i])
#             mx = max(mx, nums[i])
#             num = q.popleft()
#             if num >= mx:
#                 mx = max(q)
#             res.append(mx)
#         return res

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        q = deque()
        for i in range(k):
            while q and nums[q[-1]] <= nums[i]:
                q.pop()
            q.append(i)
        res = []
        for i in range(k, len(nums)):
            res.append(nums[q[0]])
            while q and q[0] <= i-k:
                q.popleft()
            while q and nums[q[-1]] <= nums[i]:
                q.pop()
            q.append(i)
        res.append(nums[q[0]])
        return res

# Test
print(Solution().maxSlidingWindow([1, 3, -1, -3, 5, 3, 6, 7], 3))
