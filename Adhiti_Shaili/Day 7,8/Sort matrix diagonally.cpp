class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        if(r<=1||c<=1)
        {
            return mat;
        }
        
        for(int i=0;i<r;i++)
        {
            vector<int> v;
            int k=i;
            for(int j=0;j<r-i;j++)
            {
                v.push_back(mat[k++][j]);
            }
            sort(v.begin(),v.end());
            k=i;
            int x=0;
            for(int j=0;j<r-i;j++)
            {
                mat[k++][j]=v[x++];
            }
        }
        
        for(int i=c-r;i<c;i++)
        {
            vector<int> v;
            int k=i;
            for(int j=0;j<c-i;j++)
            {
                v.push_back(mat[j][k++]);
            }
            sort(v.begin(),v.end());
            k=i;
            int x=0;
            for(int j=0;j<c-i;j++)
            {
                mat[j][k++]=v[x++];
            }
        }
        for(int i=1;i<c-r;i++)
        {
            vector<int> v;
            int k=i;
            for(int j=0;j<r;j++)
            {
                v.push_back(mat[j][k++]);
            }
            sort(v.begin(),v.end());
            k=i;
            int x=0;
            for(int j=0;j<r;j++)
            {
                mat[j][k++]=v[x++];
            }
        }
        
        return mat;
        
    }
};