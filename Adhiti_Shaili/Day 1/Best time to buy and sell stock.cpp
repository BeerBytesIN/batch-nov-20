#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
        int T_i10=0;
        int T_i11=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            T_i10=max(T_i10,T_i11+prices[i]);
            T_i11=max(T_i11,-prices[i]);
        }
        return T_i10;
        
    }

int main()
{
    int n;
    cin>>n;
    vector<int> prices(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    int ans=maxProfit(prices);
    cout<<ans<<endl;
    return 0;

}