/**
 *    author:  shashank_hire
**/
#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MOD 1000000007

string f(vector<ll> &a, int n)
{
    int i, sum;
    unordered_map<ll, ll> um;
    um[0]++;
    for(i=0, sum=0;i<n;i++)
    {
        sum += a[i];
        if(um[sum])
            return "Yes";
        um[sum]++;
    }
    return "No";
}

int main()
{

    IOS;
    ll t, n, i, sum;
    vector<ll> a(100000);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<f(a, n)<<"\n";
    }
    return 0;
}