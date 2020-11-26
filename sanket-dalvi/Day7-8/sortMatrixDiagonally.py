from typing import List


class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        if not mat or not mat[0]:
            return mat

        def sortD(iRow, jCol):
            i, j = iRow, jCol
            arr = []
            while i < len(mat) and j < len(mat[0]):
                arr.append(mat[i][j])
                i += 1
                j += 1
            arr.sort()
            i, j = iRow, jCol
            k = 0
            while i < len(mat) and j < len(mat[0]):
                mat[i][j] = arr[k]
                i += 1
                j += 1          
                k += 1
        for row in range(len(mat)):
            sortD(row, 0)
        for col in range(1, len(mat[0])):
            sortD(0, col)
        return mat


# Test
print(Solution().diagonalSort([[3, 3, 1, 1], [2, 2, 1, 2], [1, 1, 1, 2]]))
