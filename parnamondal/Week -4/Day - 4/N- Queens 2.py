# Time Complexity - O(N!)
# Space Complexity - O(N)

class Solution:
    def totalNQueens(self, n: int) -> int:
        puzzle=[['.'*n]for i in range (n)]
        cols,diag,antidiag,res=set(),set(),set(),[]
        def place(row,puzzle):
            if row==n and puzzle[:] not in res:
                res.append(puzzle[:])
                return
            for col in range (n):
                if col in cols or row-col in diag or row+col in antidiag:
                    continue
                cols.add(col)
                diag.add(row-col)
                antidiag.add(row+col)
                puzzle[row]='.'*(col)+'Q'+'.'*(n-col-1)
                place(row+1,puzzle)
                cols.remove(col)
                diag.remove(row-col)
                antidiag.remove(row+col)
                puzzle[row]='.'*n
        place(0,puzzle)
        return len(res)
        
        