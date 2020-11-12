#include <bits/stdc++.h>
using namespace std;

#define in_arr(a,n) for(int ind = 0; ind < n; ind++) cin >> a[ind];
#define out_arr(a,n) for(int ind = 0; ind < n; ind++) {cout << a[ind] << " ";} cout << "\n";
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int, int> 
#define pil pair<int, long long> 
#define psi pair<string, int> 
#define pis pair<int, string> 
#define pci pair<char, int> 
#define pic pair<int, char> 
#define fi first
#define se second


typedef long long ll;

const int mod = 1e9+7;


void solve()
{
    // int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // int n = sizeof(a)/sizeof(a[0]);
    int n;
    cin >> n;

    int a[n];
    in_arr(a, n);

    int p1 = 0, p2 = n-1;
    while(p1 < p2)
    {
        if(a[p2] < 0 && a[p1] > 0)
        {
            a[p1] += a[p2];
            a[p2] = a[p1] - a[p2];
            a[p1] -= a[p2];
        }
        else if(a[p2] < 0)
            p1++;
        else if(a[p1] > 0)
            p2--;
        else
        {
            p1++;
            p2--;
        }
    }

    out_arr(a, n);
}
int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}