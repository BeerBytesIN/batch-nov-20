from typing import List


class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        arr = []
        while matrix:
            arr.extend(matrix.pop(0))
            if not matrix:
                break
            i = 0
            while i < len(matrix):
                if matrix[i]:
                    arr.append(matrix[i].pop())
                else:
                    del matrix[i]
                    continue
                i += 1
            if not matrix:
                break
            arr.extend(matrix.pop()[::-1])
            i = len(matrix)-1
            while i >= 0:
                if not i < len(matrix):
                    break
                if matrix[i]:
                    arr.append(matrix[i].pop(0))
                else:
                    del matrix[i]
                    continue
                i -= 1
        return arr


# Test
print(Solution().spiralOrder(
    [[1, 2, 3, 4], 
    [5, 6, 7, 8], 
    [9, 10, 11, 12], 
    [13, 14, 15, 16]]
))
