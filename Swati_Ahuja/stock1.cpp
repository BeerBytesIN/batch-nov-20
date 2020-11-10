#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define INF 2147483647
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;

class Solution {
public:
    int maxProfit(vector<int>& A) {
        int n=A.size();
        if(n==0)return 0;
        int minm=A[0],maxm=A[0],diffhere,maxdiff=INT_MIN;
        for(int i=0;i<n;i++){
            if(minm>A[i]){
                maxm=A[i];
                minm=A[i];
            }
            maxm=max(A[i],maxm);
            diffhere=maxm-minm;
            maxdiff=max(maxdiff,diffhere);
        }
        return maxdiff;
        
    }
};