
        
       
        
class Solution {
public:
    bool is(int i,int j,vector<string>& out,int n){
        for(int k=0;k<=j;k++)
            if(out[i][k]=='Q')
                return false;
        int row=i;
        int col=j;
        while(row>=0 && col>=0){
            if(out[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=i;
        col=j;
        while(row<n && col>=0){
            if(out[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void util(vector<vector<string>>& sol,int j,int n,vector<string>& out){
        if(j==n){
        sol.push_back(out);
            return;
        }
        for(int i=0;i<n;i++){
            if(is(i,j,out,n)){
            //    cout<<i<<j<<endl;
              out[i][j]='Q';
                util(sol,j+1,n,out);
                out[i][j]='.';
            }
        }
    }
    int totalNQueens(int n) {
      vector<vector<string>> sol; 
        vector<string> out;
        
        for(int i=0;i<n;i++){
            string x="";
            for(int j=0;j<n;j++)
                x+='.';
            out.push_back(x);
        }
     util(sol,0,n,out);
        return sol.size();
    }
};