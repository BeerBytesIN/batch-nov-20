class Solution {
public:
    bool isValid(int row,int col,int n,vector<vector<char>>& board){
        char val=board[row][col];
        for(int i=0;i<n;i++){
            if(i!=col){
                if(board[row][i]==val)
                    return false;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=row){
                if(board[i][col]==val)
                    return false;
            }
        }
        int start_row=row-row%3;
        int start_col=col-col%3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(start_col+j==col &&  start_row+i==row)
                    continue;
                if(board[start_row+i][start_col+j]==val)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
      int n=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]>='1' && board[i][j]<='9'){
                    if(!isValid(i,j,n,board))
                        return false;
                }
            }
        }
        return true;
    }
};