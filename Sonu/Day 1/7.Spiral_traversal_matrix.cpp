https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0

#include<bits/stdc++.h>
using namespace std;
int v[12][12];

void fun(int i, int n, int m)
{
    // int n
    // int m=v[0].size();
    for(int k=i; k<=m-1-i; k++)
        cout<<v[i][k]<<' ';
    for(int k=i+1; k<=n-1-i; k++)
        cout<<v[k][m-1-i]<<' ';
    for(int k=m-2-i; k>=i; k--)
        cout<<v[n-1-i][k]<<' ';
    for(int k=n-2-i; k>=i+1; k--)
        cout<<v[k][i]<<' ';
}
void solve()
{
    int n, m; cin>>n>>m;
    // v.resize(n, vector<int> (m));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>v[i][j];
    int x=min(n,m)/2;
    for(int i=0; i<(x); i++)
    {
        fun(i, n,m);
    }
    if(min(n, m) & 1){
        int d;
        if(min(n,m)==n) {
            d=n/2;
        for(int i=d; i<m-d; i++)
            cout<<v[d][i]<<' ';
        }
        else{
            d=m/2;
            for(int i=d; i<n-d; i++)
                cout<<v[i][d]<<' ';
        }
    }
    cout<<endl;
}
int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
