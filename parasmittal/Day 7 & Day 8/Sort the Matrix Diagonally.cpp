class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//method-1
        int n=mat.size();
        int m=mat[0].size();
        int l=n-1;
        while(l>=0){
            vector<int> temp;
            int i=l;
            int j=0;
            while(i<=n-1 && j<=m-1){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(temp.begin(),temp.end());
             i=l;
             j=0;
            int start=0;
            while(i<=n-1 && j<=m-1){
                mat[i][j]=temp[start++];
                i++;
                j++;
            }
            l--;
        }
        l=1;
        while(l<m){
            vector<int> temp;
            int i=0;
            int j=l;
            while(i<=n-1 && j<=m-1){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(temp.begin(),temp.end());
             i=0;
             j=l;
            int start=0;
            while(i<=n-1 && j<=m-1){
                mat[i][j]=temp[start++];
                i++;
                j++;
            }
            l++;
            
        }
        return mat;

//method-2
        unordered_map<int,vector<int>>M;
        unordered_map<int,int>P;
        int r = mat.size(),c = mat[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                M[i-j].push_back(mat[i][j]);
        }
        for(auto &x : M)
            sort(x.second.begin(),x.second.end());
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                mat[i][j] = M[i-j][P[i-j]++];
        }
        return mat;
    }
};