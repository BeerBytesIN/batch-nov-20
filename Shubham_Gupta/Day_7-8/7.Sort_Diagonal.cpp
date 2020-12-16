#include<bits/stdc++.h>
using namespace std;
// leetcode 1329
// T.C. = O(m*n*log(diagonal))
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,priority_queue<int, vector<int>, greater<int>>> map;
        int n=mat.size();
        vector<vector<int>> ans;
        if(n==0) return mat;
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                map[i-j].push(mat[i][j]);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=map[i-j].top();
                map[i-j].pop();
            }
        }
        
        return mat;
    }

  int main(){
  	vector<vector<int>> arr={{3,2,1},{1,2,3},{3,2,1}};
  	diagonalSort(arr);
  	return 0;
  }