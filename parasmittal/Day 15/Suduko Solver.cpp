class Solution {
public:
        bool isValid(int row,int col,int n,vector<vector<char>>& board,char val){
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
    bool assign(vector<vector<char>>& board,int& row,int& col,int n){
        for(row=0;row<n;row++){
            for(col=0;col<n;col++){
                if(board[row][col]=='.')
                    return true;
            }
        }
        return false;
    }
    bool util(vector<vector<char>>& board){
        int n=board.size();
        int row,col;
        if(!assign(board,row,col,n))
            return true;
        for(int number=1;number<=9;number++){
            if(isValid(row,col,n,board,(char)('0'+number))){
        
             board[row][col]=(char)('0'+number);
                
              if(util(board))
                  return true;
            
               board[row][col]='.';
            }  
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
util(board);
    }
};