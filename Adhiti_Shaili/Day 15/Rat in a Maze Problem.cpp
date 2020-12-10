#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}

void dfs(int m[MAX][MAX],int n,string s,vector<vector<bool>> visited,int row ,int col,vector<string>& ans)
{
    if(row>=n||col>=n)
    {
        return;
    }
    else if(row==n-1&&col==n-1&&m[row][col])
    {
        ans.push_back(s);
        return;
    }
    else if(visited[row][col])
    {
        return;
    }
    visited[row][col]=true;
    
    if(row+1<n&&m[row+1][col]!=0)
    {
        dfs(m,n,s+"D",visited,row+1,col,ans);
    }
    if(row-1>=0&&m[row-1][col]!=0)
    {
        dfs(m,n,s+"U",visited,row-1,col,ans);
    }
    
    if(col+1<n&&m[row][col+1]!=0)
    {
        dfs(m,n,s+"R",visited,row,col+1,ans);
    }
    if(col-1>=0&&m[row][col-1]!=0)
    {
        dfs(m,n,s+"L",visited,row,col-1,ans);
    }
}
vector<string> printPath(int m[MAX][MAX], int n) {
    string s="";
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    vector<string> ans;
    if(m[0][0]==0)
    {
        return ans;
    }
    dfs(m,n,s,visited,0,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
