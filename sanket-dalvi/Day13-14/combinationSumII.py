from typing import List


class Solution:
    def __init__(self):
        self.res = set()
    def dfs(self, candidates, target, path, cumSum, index):
        if cumSum > target:
            return
        elif cumSum == target:
            self.res.add(tuple(path))
            return
        else:
            for i in range(index, len(candidates)):
                if i > index and candidates[i] == candidates[i-1]:
                    continue
                self.dfs(candidates, target, path+[candidates[i]], sum(path)+candidates[i], i+1)
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        for i in range(len(candidates)):
            self.dfs(candidates, target, [candidates[i]], candidates[i], i+1)
        return self.res

# Test
print(Solution().combinationSum2(candidates = [10,1,2,7,6,1,5], target = 8))
print(Solution().combinationSum2([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1], 27))