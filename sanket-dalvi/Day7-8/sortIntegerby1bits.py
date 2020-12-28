from typing import List


class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        arr.sort(key=lambda x: (bin(x)[2:].count("1"),x))
        return arr

# Test
print(Solution().sortByBits([0,1,2,3,4,5,6,7,8]))