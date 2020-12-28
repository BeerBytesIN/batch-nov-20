from typing import List


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        def check(lc):
            lcS = set()
            for l in lc:
                if l in lcS:
                    return False
                elif l!= ".":
                    lcS.add(l)
            return True
        res = []
        for i in range(9):
            res.append(check(board[i]))
            res.append(check(map(lambda x: x[i], board)))
        for i in range(0,9,3):
            for j in range(0,9,3):
                res.append(check(board[i][j:j+3]+board[i+1][j:j+3]+board[i+2][j:j+3]))
        return all(res)

# Test
print(Solution().isValidSudoku(
    [["5","3",".",".","7",".",".",".","."]
    ,["6",".",".","1","9","5",".",".","."]
    ,[".","9","8",".",".",".",".","6","."]
    ,["8",".",".",".","6",".",".",".","3"]
    ,["4",".",".","8",".","3",".",".","1"]
    ,["7",".",".",".","2",".",".",".","6"]
    ,[".","6",".",".",".",".","2","8","."]
    ,[".",".",".","4","1","9",".",".","5"]
    ,[".",".",".",".","8",".",".","7","9"]]
))