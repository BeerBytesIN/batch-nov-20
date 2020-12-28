from typing import List


class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if len(matrix) == 0: return False
        m = len(matrix)
        n = len(matrix[0])
        def getInd(i):
            return (i//n, i%n)
        l = 0
        h = m*n - 1
        while l <= h:
            mid = l + (h-l)//2
            i, j = getInd(mid)
            if matrix[i][j] == target:
                return True
            elif matrix[i][j] < target:
                l = mid + 1
            else:
                h = mid - 1
        return False

# Test
print(Solution().searchMatrix(matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 34))