class Solution {
public:
    bool issafe(int row,int col,vector<string>& out,int n){
        for(int i=0;i<row;i++){
            if(out[i][col]=='Q')
                return false;
        }
        for(int j=0;j<col;j++){
            if(out[row][j]=='Q')
                return false;
        }
        int i=row,j=col;
        while(i>=0 && j>=0){
            if(out[i][j]=='Q')
                return false;
            i--;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0){
            if(out[i][j]=='Q')
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    void util(int col,vector<vector<string>>& ans,vector<string>& out,int n){
        if(col==n){
            ans.push_back(out);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,out,n)){
                out[row][col]='Q';
                util(col+1,ans,out,n);
                out[row][col]='.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> out;
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+='.';
            }
            out.push_back(temp);
        }
        int col=0;
        util(col,ans,out,n);
        return ans;
    }
};