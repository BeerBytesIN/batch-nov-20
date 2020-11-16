#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
        
    int a[n], leftmax[n], rightmax[n];
    long long ans = 0;
    
    for(int i =0; i < n; i++)
        cin >> a[i];
        
    leftmax[0] = a[0];
    rightmax[n-1] = a[n-1];
    
    for(int i = 1; i < n-1; i++)
    {
        leftmax[i] = max(leftmax[i-1], a[i]);
        rightmax[n-i-1] = max(rightmax[n-i], a[n-i-1]);
    }
    
    for(int i = 1; i < n-1; i++)
    {
        ans += max(0, min(leftmax[i-1], rightmax[i+1])-a[i]);
    }
    cout << ans << "\n";
}
int main()
 {
	int t;
	cin >> t;
	
	while(t--)
	{
	    solve();
	}
	return 0;
}