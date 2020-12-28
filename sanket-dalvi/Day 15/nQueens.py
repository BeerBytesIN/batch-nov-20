
from typing import List


class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res = []
        A = n
        def fillBoard(board, l, q):
            tempBoard = [i[:] for i in board]
            for i in range(l+1,len(tempBoard)):
                for j in range(A):
                    if j == q or q+i-l == j or q-i+l == j:
                        tempBoard[i][j] = False
            return tempBoard

        def solve(board, l, arr):
            if l < A:
                for i in range(A):
                    if board[l][i]:
                        solve(fillBoard(board, l, i), l+1, arr+[i])
            elif l == A:
                temp = []
                for i in arr:
                    temp.append("".join(["Q" if j==i else "." for j in range(A)]))
                res.append(temp)
                        
        solve([[True]*A for _ in range(A)], 0,[])
        return res

# Test
print(Solution().solveNQueens(9))