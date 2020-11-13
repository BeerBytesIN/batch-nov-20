// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m,  n; cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    map<int, int> mp;
    for(int i=0; i<n; i++)
        mp[a[i]]++;
    for(int i=0; i<m; i++)
    {
        if(mp[b[i]]) continue;
        else { cout<<"No\n"; return;}
    }
    cout<<"Yes\n";
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
