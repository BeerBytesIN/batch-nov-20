from typing import List
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if not nums: return []
        arr = []
        nums.sort()
        def perm(curr, remaining):
            if not remaining:
                arr.append("".join(curr))
            for i in range(len(remaining)):
                perm(curr+[remaining[i]], remaining[:i]+remaining[i+1:])
        perm([], nums)
        return arr

        
t = int(input())
for _ in range(t):
    print(*Solution().permute(list(input().strip())))