from itertools import combinations
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = {()}
        for i in range(len(nums)):
            for j in combinations(nums,i+1):
                res.add(j)
        return res