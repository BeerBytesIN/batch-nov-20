#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<bool> cols;
bool isSafe(vector<vector<int>>& nq,int n, int row, int col)
{
    if(row>=n||col>=n)
    {
        return false;
    }
    if(cols[col])
    {
        return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(nq[i][j])
        {
            return false;
        }
    }
    for(int i=row,j=col;i>=0&&j<n;i--,j++)
    {
        if(nq[i][j])
        {
            return false;
        }
    }
    return true;
    
}




void backtrack(vector<vector<int>>& nq,int n,int row,vector<int>& v,vector<vector<int>>& ans)
{
    if(v.size()==n)
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(nq,n,row,i))
        {
            v.push_back(i+1);
            cols[i]=true;
            nq[row][i]=1;
            
            backtrack(nq,n,row+1,v,ans);
            
            nq[row][i]=0;
            cols[i]=false;
            v.pop_back();
        }
    }
    return;
       
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>> nq(n,vector<int>(n,0));
	    
	    vector<int> v;
	    vector<vector<int>> ans;
	    for(int i=0;i<n;i++)
	    {
	        cols.push_back(false);
	    }
	    backtrack(nq,n,0,v,ans);
	    if(ans.size()==0)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    for(int i=0;i<ans.size();i++)
	    {
	        cout<<"[";
	        for(int j=0;j<n;j++)
	        {
	            cout<<ans[i][j]<<" ";
	        }
	        cout<<"] ";
	    }
	    cout<<endl;
	    
	    
	}
	
	return 0;
}