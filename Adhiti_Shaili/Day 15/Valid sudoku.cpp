#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int,unordered_set<int>> row;
        unordered_map<int,unordered_set<int>> col;
        unordered_map<int,unordered_set<int>> block;
        for(int i=0;i<9;i++)
        {
            row[i]=unordered_set<int>();
            col[i]=unordered_set<int>();
            block[i]=unordered_set<int>();
        }
        for(int i=0;i<9;i++)
        {          
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int a=(int)board[i][j];
                    if(row[i].find(a)!=row[i].end())
                    {
                        return false;
                    }
                    if(col[j].find(a)!=col[j].end())
                    {
                        return false;
                    }
                    int x=(i/3)*3+(j/3);
                    if(block[x].find(a)!=block[x].end())
                    {
                        return false;
                    }
                    row[i].insert(a);
                    col[j].insert(a);
                    block[x].insert(a);
                }
                
            }
        }
        return true;
        
        
    }
};