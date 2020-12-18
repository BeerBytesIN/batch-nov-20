# Time Complexity- O(9^(n*n)).
# Space Complexity - O(n*n)


class Solution:
    def solveSudoku(self, arr: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        def find_empty_location(arr, l):
            for row in range(9):
                for col in range(9):
                    if(arr[row][col]== '.'):
                        l[0]= row
                        l[1]= col
                        return True
            return False
        def used_in_row(arr, row, num):
            for i in range(9):
                if(arr[row][i] == str(num)):
                    return True
            return False
        def used_in_col(arr, col, num):
            for i in range(9):
                if(arr[i][col] == str(num)):
                    return True
            return False
        def used_in_box(arr, row, col, num):
            for i in range(3):
                for j in range(3):
                    if(arr[i + row][j + col] == str(num)):
                        return True
            return False

        def check_location_is_safe(arr, row, col, num):
            return not used_in_row(arr, row, num) and not used_in_col(arr, col, num) and not used_in_box(arr, row - row % 3, col - col % 3, num)                         
        def solve_sudoku(arr):
            l =[0, 0]
            if(not find_empty_location(arr, l)):
                return True
            row = l[0]
            col = l[1]
            for num in range(1, 10):

                # if looks promising
                if(check_location_is_safe(arr, 
                                row, col, num)):

                    # make tentative assignment
                    arr[row][col]= str(num)

                    # return, if success, 
                    # ya ! if(solve_sudoku(arr)):
                    if(solve_sudoku(arr)):
                        return True

                    # failure, unmake & try again
                    arr[row][col] = '.'

            # this triggers backtracking	 
            return False
        
        if solve_sudoku(arr):
            return arr
        else:
            return
        

    	
    
    '''def check_empty_loc(b,l):
            for i in range (9):
                for j in range(9):
                    if b[i][j]=='.':
                        l[0]=i
                        l[1]=j
                        return True
            return False
        def rowing(b,row,num):
            for i in range (9):
                if b[row][i]==num:
                    return True
            return False
        def coming(b,col,num):
            for i in range (9):
                if b[i][col]==num:
                    return True
            return False
        def box(b,row,col,num):
            for i in range (3):
                for j in range (3):
                    if b[i+row][j+col]==num:
                        return True
            return False
        def check_loc_safe(b,row,col,num):
            return not rowing(b,row,num) and not coming(b,col,num) and not box(b,row-row%3,col-col%3,num)
        def sodf(b):
            l=[0,0]
            if not check_empty_loc (b,l):
                return False
            row,col=l[0],l[1]
            for i in range (1,10):
                if not check_loc_safe(b,row,col,i):
                    b[row][col]=i
                    if sodf(b):
                        return True
                    #return True
                    b[row][col]='.'
        if (sodf(b)):
            return b'''


