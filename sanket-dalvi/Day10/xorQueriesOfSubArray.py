from itertools import accumulate
from operator import xor
from typing import List
class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        cummXor = list(accumulate(arr, xor))
        res = []
        for i in queries:
            if i[0]==0:
                res.append(cummXor[i[1]])
            else:
                res.append(cummXor[i[0]-1]^cummXor[i[1]])
        return res

# Test
print(Solution().xorQueries(arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]))